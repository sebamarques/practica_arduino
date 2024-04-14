int led = 4;// decidimos en que pin se encuentra nuestra variable
// podemos usar variables para otras cosas no necesariamente
// para usar los pines con ellas, podemos crear una variable
// que mandemos nosotros por nuestro celular via wifi o 
// bluetooth, ej int valor_celular ; asi valor_celular se 
// puede usar en un futuro, tambien sirve para los sensores
// como los ultrasonicos o los pir

// void setup es una funcion que se ejecuta una unica vez
// al cargar o al conectar a la corriente el arduino
// todo lo que haya en el se ejecuta una vez en lo que el 
// arduino este conectado
void setup(){
  Serial.begin(9600);// la conexion entre el arduino
  //y la computadora, el arduino tiene una conexion
  // serial de 9600 baudios
  pinMode(led,OUTPUT);// decide si la variable/componente
  //electronico es de entrada o de salida, con esto me 
  //refiero a si es un sensor que manda datos al arduino
  // o el arduino se encarga de activarlo o desactivarlo
  // dependiendo del codigo en el void loop
  }
// el void loop se encarga de ejecutar constantemente
//el codigo que hay en el, es como un while infinito
void loop(){
  digitalWrite(led,HIGH);// sirve para mandar datos al 
  // componente electronico que tenemos en la variable
  // tenemos dos estados, HIGH o LOW, HIGH es prendido o 1
  // y LOW es apagado o 0
  }
