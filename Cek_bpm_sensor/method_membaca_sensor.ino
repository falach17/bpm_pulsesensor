 void membaca_sensor(){
  // pointer untuk membaca sensor selama 15 detik.
  saatIniMillis = millis();
  Serial.println("Detik ke : ",saatIniMillis/1000);
  // pembacaan sensor diletakkan ke variabel Sinyal.
  Sinyal = analogRead(PulseSensorPurplePin);
  // Jika sesuai dengan nilai satu denyut akan bertambah 1 variabel BPM.
  if(Sinyal > satudenyut){
    BPM+=1;          
  }
  // jika sudah melewati 15 detik akan mengirimkan sms jika BPM<60 atau BPM>100 
  // dan mengirimkan ke Thingspeak.
  if(saatIniMillis-millisSebelum>=waktumembaca){
    BPM=BPM*4; // waktumembaca 4 times
    Serial.print("Hasil Detak jantung=");
    Serial.println(BPM);
    Serial.println("---------------------------");
    BPM=0;
    millisSebelum=saatIniMillis;
   }
 }
