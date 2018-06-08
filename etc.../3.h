
int laplace[3][3] = {{0, -1, 0},
                     {-1, 4, -1},
                     {0, -1, 0}};
int prewit[3][3] = {{-1, 0, 1}, {-1, 0, 1}, {-1, 0, 1}};
int sobel[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
unsigned char** cria_matriz(int x, int y){
	unsigned char **temp;

	temp = (unsigned char**)malloc(x* sizeof(char*));
	
	int i;

	for(i = 0; i < x; i++){
		temp[i] = (unsigned char*)malloc(y*sizeof(char));
	}

	return temp;
}  
unsigned char convoluir(int i, int j, int laplace[][3], unsigned char **M){
	int p = 0, q = 0, temp;
	int element = 0;
	i = i - 1;
	j = j - 1;
	temp = i;
	//aqui eu multiplico os elementos que geram a matriz cujo elemento M[i][j] eh o centro pelo respectivos laplace[i][j]
	while(p < 3){
		while(q < 3){
		    element += M[i++][j] * laplace[q++][p];
		}
		p++;
		q = 0;
		i = temp;
		j++;
	}
	// aqui eu retorno o elemento
	element = (element > 255?255 : element);
	element=( element < 0? 0 : element);
	return element;
}

unsigned char** cat_shadow(unsigned char **m, int linha, int coluna, char key){
    
    int matriz[3][3];
  
    if(key == 'L'){
    for(int i = 0; i < 3; i++){
		for(int j = 0; j <3; j++){
			matriz[i][j] = laplace[i][j];
		}
	}
       
    }else if( key == 'P'){
          for(int i = 0; i < 3; i++){
		for(int j = 0; j <3; j++){
			matriz[i][j] = prewit[i][j];
		}
	}
    
    }else if(key == 'S'){
    for(int i = 0; i < 3; i++){
		for(int j = 0; j <3; j++){
			matriz[i][j] = sobel[i][j];
	    }
    }
}
  
	unsigned char **temp = cria_matriz(coluna+2,linha+2);
	for(int i = 0; i < linha; i++){
		for(int j = 0; j < coluna; j++){
			temp[i][j] = 0;
		}
	}
	for(int i = 1; i < linha + 1; i++){
		for(int j = 1; j < coluna + 1; j++){
			temp[i][j] = m[i - 1][j - 1];
		}
	}
	for(int i = 1; i < linha - 1; i++){
		for(int j = 1; j < coluna - 1; j++){
			temp[i][j] = convoluir(i, j, matriz, m);
		}
	}
	for(int i = 1; i < linha + 1; i++){
		for(int j = 1; j < coluna + 1; j++){
			m[i - 1][j - 1] = temp[i][j];
		}
	}
	return temp;
}

