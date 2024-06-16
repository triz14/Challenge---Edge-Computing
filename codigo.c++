//Definição dos pinos de controle do motor
#define Motor_1 9; 
#define Motor_2 11;
#define dir_1 8;
#define dir_2 10;

//Definição dos pinos dos sensores
#define pin_S1 7
#define pin_S2 6
bool Sensor_1 = 0;
bool Sensor_2 = 0;

//variável responsável por controlar a velocidade dos motores
int velocidade = 150;

void setup(){
//Setamos os pinos de controle dos motores como saída
pinMode(Motor_1, OUTPUT);
pinMode(Motor_2, OUTPUT);
pinMode(dir_1, OUTPUT);
pinMode(dir_2, OUTPUT);

//Setamos a direção inicial do motor como 0, 
//isso fará com que ambos os motores girem para frente
digitalWrite(dir_1, LOW);
digitalWrite(dir_2, LOW);

//Setamos os pinos dos sensores como entrada
pinMode(pin_S1, INPUT);
pinMode(pin_S2, INPUT);
}

void loop(){
//Neste processo armazenamos o valor lido pelo sensor na 
//variável que armazena tais dados.
Sensor_1 = digitalRead(pin_S1);
Sensor_2 = digitalRead(pin_S2);

//Aqui está toda a lógica de comportamento do robô: 
//Para a cor branca atribui o valor 0 e, para a cor preta, 
//o valor 1.
if((Sensor_1 == 0) && (Sensor_2 == 0)){ 
analogWrite(Motor_1, velocidade); 
analogWrite(Motor_2, velocidade);
}

if((Sensor_1 == 1) && (Sensor_2 == 0)){
analogWrite(Motor_1, 0); 
analogWrite(Motor_2, velocidade); 
}

if((Sensor_1 == 0) && (Sensor_2 == 1)){ 
analogWrite(Motor_1, velocidade); 
analogWrite(Motor_2, 0); 
}

}
