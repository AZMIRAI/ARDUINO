void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); //통신속도를 115200bps로 설정 1초에 1152문자를 보냄
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello, World!"); //문자열 출력
}
