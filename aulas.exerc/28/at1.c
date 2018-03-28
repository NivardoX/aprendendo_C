pseudocodigo
  string 1 = "abcdef"
  string 2 = "xyzw"
  string 3[tamanho de 1 e 2 mais 1(/0) = " " 
  
  i,j
  for(i = 0;str1[i] != '/0' ;i++) //enqnt i diferente de /0
    str3[i] = str1[i]
  
  j = i //guardar tamanho da primeira string
  for(i = 0;str2[2];i++)
    str3[i+j] = str2[i]
    
  str3[i+j] = '\0'
  printf("%s",str3);
