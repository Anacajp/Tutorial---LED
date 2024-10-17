void setup() {
  // inicializa o LED
  pinMode(LED_BUILTIN, OUTPUT);
}

// cria o loop para a luz do LED
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // liga o LED
  delay(1000);                      // espera um tmepo X do delay
  digitalWrite(LED_BUILTIN, LOW);   // desliga o LED
  delay(1000);                      // espera mais um tempo Y 
}
