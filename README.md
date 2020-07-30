# Pole-Climbing-Robot
Srishti 2020

![Final Product](https://github.com/DanielLarusso1/Pole-Climbing-Robot/blob/master/Images%20and%20Videos/Images/Assembly.jpeg)
## Abstract
<p align="justify">Pole climbing robot utilizes a rack and pinion system to perform vertical motion up and down a pole, with the caterpillar motion of the top plate and bottom plate. The robot can climb up the poles within a certain range of diameters.</p>

## Motivation
<p align="justify">Electricians and workmen have to climbup an electric pole in case of a malfunction, this leads to several accidents. This can be avoided if a robot can be made to climb the pole and perform specialised functions. As a first step towards that, this robot has been designed to climb a pole. It can also be used for surveillance and fruit harvesting.</p>

## Workflow
![Workflow](https://github.com/DanielLarusso1/Pole-Climbing-Robot/blob/master/Images%20and%20Videos/Images/Flowchart.JPG)

## Mechanical Aspect of the Design
<p align="justify">The robot consists of a top plate is connected to the pinion and a clamp whereas the bottom plate is connected to the rack and the lower clamp. The clamp is 3d printed and is specifically designed for this purpose. It is padded with a soft gripping rubbery material. It's grip is loosened or tightened using the motion of a lead screw. The two plate system is stabilised by two rods which pass through the top plate through linear bearings and are connected to the bottom plate.</p>

## Electronics Aspect of the Design
<p align="justify">The micro-controller used is Arduino UNO and Cytron motor drivers. The pinion is rotated by a DC motor with an encoder. The lead screw of the clamp is rotated by a DC motor with an encoder. 12 V battery is used for powering the system</p>

## Cost Structure 
| Sr. No. | Product | Cost(In Rupees) | Quantity | Subtotal| 
|---|---|---|---|----|
| 1. | Arduino UNO | 500 | 1 | 500 |
| 2. | Encoder | 1500 | 3 | 4500 |
| 3. | DC motor | 300 | 2 | 600 |
| 4. | Cytron MDD | 1700 | 2 | 3400 |
| 5. | Lead screw | 450 | 1 | 450 |
| 6. | Brass Rod | 80 | 1 | 80 |
| 7. | Linear Bearing | 170 | 2	| 340 |
| 8. | Circular Bearing | 40 | 2 | 80 |
| 9. | 12 V battery | 1500 | 1 | 1500 |
| 10. | Miscellaneous | 300 | - | 300 |
|  | **Total** | | | 11,750 |

## Applications
 1. Fruit harvesting
 2. Painting poles
 3. Cleaning lamp post
 4. Accessing wind turbines or street light for inspection
 5. Surveillance
 6. Fix Telecom cables

## Limitations
 1. The lead screw mechanism is slower than we'd desire.
 2. The rack and pinion is slightly slower than the faster actuators like hydraulic and pneumatic.
 3. The clamp design limits the width of the rod that can be climbed.
 4. The bot's weight increases because of the several actuators and other parts.

## Future Improvement
 1. Design a prototype at big size, which can be used for pole with different diameters and high payloads capability
 2. Replace the grippers with a better gripping mechanism ( Ex: Soft robot gripper or more number of grippers to climb poles of any texture and diameter)
 3. Remotely control the robot from a smart device.

## Team members
 1. [Akshara Singh](https://github.com/ItsAshChase)
 2. [Nitika Gupta](https://github.com/Nitikagupta16)
 3. [Parag Garg](https://github.com/paraggarg1102)
 4. [Sarthak Sharma](https://github.com/DanielLarusso1)

## Mentors
 1. [Aditya Raj]()
 2. [Rishika Chandra](https://github.com/chandrarishika14)

## References
 1. [Rack and Pinion mechanism]( https://www.britannica.com/technology/rack-and-pinion)
 2. [Lead screw clamps](https://in.misumi-ec.com/vona2/mech)
 3. [Pole Climbing basics]( http://engineering.nyu.edu/mechatronics/projects/ME7836/spring2017/Arduino/4mini1/report.pdf)
