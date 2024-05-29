# Challenge---Edge-Computing
Projeto de simulação de um carrinho segue linha



## Participantes

```http 
- Abner de Paiva Barbosa          | rm558468
- Beatriz Vieira de Novais        | rm554746
- Fernando Luiz Silva Antonio     | rm55201
- Mariana Neugebauer Dourado      | rm550494
- Thomas de Almeida Reichmann     | rm554812
```






## Informações sobre o projeto
Informações sobre alguns componentes usados na criação do projeto:

- Motor de engrenagem - Um motor de engrenagem é um dispositivo mecânico que converte energia elétrica em energia mecânica, por meio de uma combinação de engrenagens rotativas.
- Protoboard - sendo uma placa de circuito impresso (PCB) que permite a montagem temporária de circuitos eletrônicos. Ela é composta por uma matriz de furos condutores interligados internamente por trilhas condutoras, onde os componentes eletrônicos podem ser inseridos e conectados de forma rápida e sem a necessidade de solda.
- LED - é um componente eletrônico que emite luz quando uma corrente elétrica passa por ele.
- LDR - um resistor dependente de luz. Uma característica é que a resistência dele irá variar de acordo com a quantidade de luz;
- Resistor - sua função é de limitar o fluxo de corrente elétrica em um circuito. Eles podem ser usados para várias coisas, uma delas em exemplo: é limitar a corrente que passa por um LED para evitar danos;
- TIP120 - é um transistor Darlington NPN que pode ser usado com um Arduino para controlar motores, acender luzes e acionar outros dispositivos de alta potência. Ele é capaz de amplificar a corrente de um sinal de baixo nível do Arduino para controlar dispositivos de alta corrente.
- Jumpers - são cabos utilizados para fazer conexões entre os diversos componentes do circuito;
- Bateria 9V - fonte de alimentação


## Passo a Passo
Para você conseguir fazer esse projeto, você vai precisar desses componentes:

- 2 Fotoresistores (LDR)
- 2 LEDS
- 2 Resistor
- Protoboard
- Jumpers
- 2 Motores de engrenagem
- Bateria 9V
- 2 TIP120

Após você conseguir todos os matériais, você pode agora seguir os passos à passos.

1. montagem:

- conecte o TIP120 em uma área da Protoboard
- conecte o resistor a Protoboard também, porém a conexão deve ser horizontal
- posicione cada motor em um lado da Protoboard

2. produzindo conexão:
Tudo serve para os dois lados do carrinho

Conexões negativas:

- conecte a parte negativa da bateria com a linha negativa da Protoboard e faça a mesma coisa com a parte positiva;
- conecte a parte negativa do motor com a linha negativa da Protoboard, isso serve para os dois motores;
- conecte a perna negativa do LED a linha negativa da Protoboard;
- Conecte a perna negativa do lDR a primeira perna do TIP120.

Conexões positivas: 

- Conecte a perda positiva do LDR na linha positiva da Protoboard;
- Conecte uma perna do resistor a linha positiva da Protoboard;
- Conecte a outra perna do resistor a perna positiva do LED;
- Conecte a segunda perna do TIP120 a linha positiva da Protoboard;
- E por fim conecte a última perna do TIP120 na parte positiva do motor.






## Explicação de como funciona o  projeto
Esse projeto simula um carrinho segue linha, porém com os componentes que os simuladores gratuitos possuem, a simulação em si não precisa de nenhum código, porém fiz outro circuito com código para facilitar a compreensão.

 O código sem simulação funciona por meio da alimentação pela bateria de 9V, o carrinho anda se identificar luz (por meio do LDR / simulada a cor branca) e não anda caso identifique preto (simula a cor preta) o TIP120 serve como controlador para o motor.
## Link do projeto (modo simulação)

```http 
Simulação sem código:
https://www.tinkercad.com/things/7f6Ku147qmI-carrinho-challenge/editel?sharecode=3xKsOLGadGdWwh9mQk2OKyOXShrdDjbUCsRexdFib2E

Código da simulação:
https://www.tinkercad.com/things/9XTbHIru7TY-carrinhocodigo-challenge/editel?sharecode=a7opFtzUkbuj86ChZt2mmnsCK6G-c6PPWRUpl5bMCrA

```
