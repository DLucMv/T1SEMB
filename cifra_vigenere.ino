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
  //char text[500] = "Lorem C0m Núm3r0s E @#peci*&S";
  char text[800] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec euismod efficitur lorem. Vivamus felis dolor, rutrum vitae pretium ut, rutrum ut sapien. Pellentesque tincidunt porta eros a tempus. Nulla mollis quam id felis pretium, vel maximus velit accumsan. Vestibulum ultrices nec velit sit amet commodo. Suspendisse imperdiet id ante non accumsan. Mauris condimentum semper lectus, ut aliquam nibh finibus in. Integer sed leo vel augue faucibus ullamcorper ac ac orci. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Nunc auctor sollicitudin enim vitae fringilla. Sed sed enim ac sapien eleifend ornare sit amet ac urna.Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Duis tincidunt ullamcorper magna. Integer nibh.";

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
