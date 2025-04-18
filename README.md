# Arduino Roomba

## Descripción
### ¿En qué consiste el proyecto?
El presente proyecto busca crear un robot aspirador/fregador que sea capaz de:
1. Aspirar y fregar el área por la que pase. 🧽
2. Medir el área a limpiar y hacer cálculos respecto a los datos obtenidos. 📐
3. Realizar un recorrido precalculado que funcione aún tras sufrir una alteración en su movimiento. 🐢
4. Detectar obstáculos en el camino y esquivarlos para posteriormente continuar su recorrido previo. 🚗
5. Detectar desniveles para así evitar caídas o accidentes. ⚰
6. Calcular su posición en el espacio aún tras haber sufrido una alteración en su recorrido. 🚩

### Conceptos utilizados
Como práctica educativa, el proyecto integra las siguientes tecnologías y conceptos:
* Arduino IDE
* KiCad
* Github
* Control de motores DC por medio de transistores y puentes H.
* Funcionamiento y aplicación de sensores varios.
* Manufactura de PCBs.
* Técnicas de soldado y barrenado.
* Consideración de aspectos mecánicos de un robot.

## Estructura del respositorio

## Componentes, materiales y herramientas
Los componentes incluidos en la placa se pueden encontrar en el archivo *components_pcb*, los no incluidos son los siguientes:

| Componente | Cantidad | Valor |
| -------- | -------- | -------- |
| [Motorreductor](https://uelectronics.com/producto/l298n-modulo-driver-motor-a-pasos/) | 2 | 120:1 |
| [Llanta para Motorreductor TT](https://uelectronics.com/producto/llanta-para-motorreductor-tt-de-66x27mm/) | 2 | 66x27mm |
| [Módulo Driver Motor DC](https://uelectronics.com/producto/l298n-modulo-driver-motor-a-pasos/) | 1 | L298N |
| [Sensor Ultrasónico](https://uelectronics.com/producto/sensor-ultrasonico-hc-sr04/) | 1 | HC-SR04 |
| [Sensor De Obstáculos Reflectivo Infrarrojo](https://uelectronics.com/producto/fc-51-sensor-de-obstaculos-reflectivo-infrarojo/) | 1 | FC-51 |
| [Módulo Encoder Sensor de Velocidad](https://uelectronics.com/producto/hc-020k-modulo-encoder-sensor-de-velocidad-b83609/) | 1 | HC-020K |
| [Motor 365 12V 4000 RPM](https://uelectronics.com/producto/motor-365-12v-4000-rpm/) | 1 | 12V |
| [Porta Pilas para Baterías 18650](https://uelectronics.com/producto/porta-pila-para-baterias-18650/) | 1 | 3 pilas |
| [Batería 18650 3.7V 2200mAh ±5%](https://uelectronics.com/producto/bateria-18650-3-7v-2200mah/) | 3 | 2200mAh |
| [Conector Molex 2510 Hembra](https://uelectronics.com/producto/conector-molex-2510-hembra-diferentes-pines/) | 2 | 2 pines |
| [Conector Molex 2510 Hembra](https://uelectronics.com/producto/conector-molex-2510-hembra-diferentes-pines/) | 2 | 3 pines |
| [Conector Molex 2510 Hembra](https://uelectronics.com/producto/conector-molex-2510-hembra-diferentes-pines/) | 1 | 4 pines |
| [Cable Eléctrico (rojo)](https://uelectronics.com/producto/cable-electrico-calibre-22-awg-1-metro-diferentes-colores/) | 1m | 22 AWG |
| [Cable Eléctrico (negro)](https://uelectronics.com/producto/cable-electrico-calibre-22-awg-1-metro-diferentes-colores/) | 1m | 22 AWG |
| [Terminal Conector 2510](https://uelectronics.com/producto/terminal-conector-2510/) | 14 |  |

Los materiales utilizados para la estructura del robot fueron los siguientes:

| Material | Cantidad | Medida |
| -------- | -------- | -------- |
| Base de acrílico con orillas redondeadas| 2 | Base mayor: 23.5cm, Base menor: 9cm, Altura: 21cm |
| Rondana metálica | 16 | D: 6mm, Dc: 1.6cm |
| Varillas roscadas | 4 | D: 6mm, H: 12cm |
| Tuerca (varillas roscadas) | 12 | D: 6mm, S: 9mm, K: 3mm |
| Cinchos de plástico | 4 | 10cm |
| [CY-15A Rueda Loca Universal de Metal](https://uelectronics.com/producto/cy-15a-rueda-loca-universal-de-metal/) | 1 | D: 4mm |
| Tornillo | 2 | D: 4mm, L: 1cm |
| Tuerca (rueda loca) | 2 | D: 4mm, S: 9mm, K: 3mm |

La herramienta utilizada para el ensamblado fue la siguiente:
* Desarmador plano o de cruz adecuado para los tornillos conseguidos.
* Taladro eléctrico (con brocas adecuadas para el correcto paso del alambrado y tornillos)
* Pinzas de corte
* Pinzas de punta
* Cautín
* [Soldadura (100g, Ø0.6mm)](https://uelectronics.com/producto/rollo-de-soldadura-estano-con-100-500g-y-o0-6-0-8mm/)
