char texto[800];
char chave[20];

char *strupr(char *str){
  unsigned char *p = (unsigned char *)str;
    
  while (*p) {
       *p = toupper(*p);
      p++;
  }
   
   
  char *p1 = str;
  char *p2 = str;

  while (*p1) {
    if (*p1 != ' ') {
        *p2 = *p1;
        p2++;
    }
    p1++;
  }
    
  *p2 = '\0';
    
  return str;
}

void encriptar(char *chave, char* texto){
  int chaveLength = strlen(chave);
  int textoLength = strlen(texto);
  
  for (int i = 0; i < textoLength; i++) {
    char letraChave = chave[i % chaveLength];
    texto[i] = texto[i] > 64 ? (texto[i] + letraChave) % 26 + 65 : texto[i];
  }
}

void desencriptar(char *chave, char *texto){
  int chaveLength = strlen(chave);
  int textoLength = strlen(texto);
  
  for (int i = 0; i < textoLength; i++) {
    char letraChave = chave[i % chaveLength];
    texto[i] = texto[i] > 64 ? (texto[i] - letraChave + 26) % 26 + 65 : texto[i];
  }
}

void setup() {
  Serial.begin(9600);  // Inicializa a comunicação serial a 9600 bps
  
  char key[20] = "PIZZA";
  char text[800] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur vestibulum accumsan nisi, vitae faucibus dolor. Vivamus tempor ac ex id luctus. Quisque erat orci, pretium sit amet magna ut, elementum tempor ipsum. Donec eu elementum ante, quis faucibus nisl. Proin ex elit, maximus vitae sollicitudin sit amet, interdum non dui. Cras non mi ultricies, dictum nunc vitae, sollicitudin mi. In et nisl in felis rhoncus vehicula. Nulla dignissim lectus in eros tristique auctor. Cras dapibus eros sit amet nibh tincidunt condimentum. Nam a molestie mi, ut gravida sapien. Morbi cursus ullamcorper leo, ac tempor nisl sagittis in. Etiam dignissim, velit ac suscipit interdum, ante dui luctus odio, varius vestibulum sapien mauris nec felis. Sed laoreet arcu at leo blandit suscipit.";
  
  strupr(key);
  strupr(text);

  Serial.print("Texto Original: ");
  Serial.println(text);

  encriptar(key, text);
  
  Serial.print("Texto Criptografado: ");
  Serial.println(text);

  desencriptar(key, text);
  
  Serial.print("Texto Descriptografado: ");
  Serial.println(text);

}
 

void loop() {

  //Nothing to do here...

}
