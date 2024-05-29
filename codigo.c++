//Definição dos pinos de controle do motor
#define Motor_1 9; 
#define Motor_2 11;
#define dir1 8;
#define dir2 10;

//Definição dos pinos dos sensores
#define pin_S1 7
#define pin_S2 6
bool Sensor1 = 0;
bool Sensor2 = 0;

//variável responsável por controlar a velocidade dos motores
int velocidade = 150;

void setup(){
//Setamos os pinos de controle dos motores como saída
pinMode(Motor_1, OUTPUT);
pinMode(Motor_2, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);

//Setamos a direção inicial do motor como 0, 
//isso fará com que ambos os motores girem para frente
digitalWrite(dir1, LOW);
digitalWrite(dir2, LOW);

//Setamos os pinos dos sensores como entrada
pinMode(pin_S1, INPUT);
pinMode(pin_S2, INPUT);
}

void loop(){
//Neste processo armazenamos o valor lido pelo sensor na 
//variável que armazena tais dados.
Sensor1 = digitalRead(pin_S1);
Sensor2 = digitalRead(pin_S2);

//Aqui está toda a lógica de comportamento do robô: 
//Para a cor branca atribui o valor 0 e, para a cor preta, 
//o valor 1.
if((Sensor1 == 0) && (Sensor2 == 0)){ 
analogWrite(Motor_1, velocidade); 
analogWrite(Motor_2, velocidade);
}

if((Sensor1 == 1) && (Sensor2 == 0)){
analogWrite(Motor_1, 0); 
analogWrite(Motor_2, velocidade); 
}

if((Sensor1 == 0) && (Sensor2 == 1)){ 
analogWrite(Motor_1, velocidade); 
analogWrite(Motor_2, 0); 
}

}
