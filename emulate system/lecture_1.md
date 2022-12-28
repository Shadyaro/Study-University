## Introduction 

* An embedded system is a **microcontroller** that is designed to perform a specific task.

## What is **Real-Time** Embedded system

* Depends on 
	- **logical computation** result
	- **Time** which the results are produced

## Types of **Real-Time** Embedded System

1. **Hard Real-Time System:** Must response in **Millisecond** 
	
	+ Example: (car air-bag)

2. **Soft Real-Time System:** Allow response in **second or milisecond**

	+ Example: (washing machine, microwave)

## Some applications of the Embedded System.

* Smart Homes
* Healthcare
* fire alarm ( sense only smoke )

## Advantages of Embedded System 💀💀💀

* Low **cost**
* Small **size** and **faster** to load
* Easy to **manage**
* More specific to **one task**
* Spend **less resources** 

## Embedded System **Basics** 

* **embedded system basics** = **embedded system hardware** + **embedded system software**.

## Embedded System **Hardware**

* It is core of any embedded system, which is in the (PCB ( Printed Circuit Board )).

* The **Embedded System Development Board** is divided into 5 modules.

	+ Processor ( CPU )
	+ Memory ( RAM )
    + I/O devices 
		- Input devices
		- Output devices
	+ Bus controllers

## Embedded System **Software** 

* it is **written script** in **high level language** to **execute a particular function**, this **script** is use for **program the embedded system hardware**.

## Microcontroller

* Microcontroller containing **( Processor ( CPU ), Memory ( RAM ), I/O pin )**

* It is a **device on the board** that **computes this tasks that assigned by the user** in an efficient manner.

## Microcontroller Vs Microprocessor

| Keyword   | Microcontroller   |      Microprocessor      |
|:----------|:----------:|:-------------:|
| **with or alone** | **(CPU, RAM, ROM, I/O, Timer)** all this in the single **Chip ( Board )**  								| **(CPU)** is **alone** to **(RAM, ROM, I/O, and Timer)**  |
| | || |
| | || |
| **limit** | **limit** amout of **CPU, RAM, ROM, I/O**. 																		| User can **pick the amount** of **RAM, ROM, and I/O pins**.  |
| | || |
| | || |
| **internal and external + fast** | Since **(Memory ( RAM ), I/O devices)** are internal, then most operation is internal instruction, then it is **faster** 	| Since **(Memory ( RAM ), I/O devices)** are external, then each operation is external instruction, then it is **slower** |
| | || |
| | || |
| **run** | **run a single program** 																					| Can **run number of programs**  |
| | || |
| | || |
| **cost** | **Cost** of the entire system is **low** 																			| **Cost** of the entire system is **high**  |
| | || |
| | || |
| **heart** | is the **heart** of **embedded systems**  																		| is the **heart** of **computer systems** |
| | || |
| | || |
| **power** | **Low power**  																								| **High Power** |
| | || |
| | || |
| **purpose** | **Single purpose** 																							| **General purpose** |


<!-- * Microcontroller

	- **(CPU, RAM, ROM, I/O, Timer)** all this is in the single **Chip ( Board )** 

	- limit amout of **CPU, RAM, ROM, I/O**. 

	- Since **(memory, I/O devices)** are internal, then most operation is internal instruction, then it is faster

	- runs a **single program**

	- Cost of the entire system is **low**

	- is the **heart** of embedded systems 

	- **Low power** 

	- **Single purpose**

* Microprocessor

	- **(CPU)** is alone to **(RAM, ROM, I/O, and Timer)** 

	- User can pick the amount of **RAM, ROM, and I/O pins**. 

	- Since **(memory and I/O devices)** are external, then each operation is external instruction, then it is slower

	- Can run **number of programs** 
	
	- Cost of the entire system is **high** 

	- is the **heart** of computer systems
	
	- **General purpose** -->


* **TB:** **Modern embedded systems** --> **based** on --> **microcontrollers**.

<!-- * **TB:** A microcontroller is a Small Computer on the board containing a **( Processor ( CPU ), Memory ( RAM ), Programmable I/O pin )** -->

## The ATmega328 

* it is **used** in **Arduino Uno board**

* **low power** CMOS ( Complementary Metal Oxide Semiconductor ) **8-bit microcontroller**

* based on AVR imporoved RISC architecture

<!-- ![image](https://images.theengineeringprojects.com/image/webp/2017/07/ATmega328-Pinout.png.webp?ssl=1) -->

## Arduino

* use **modified c++**

* uses **built-in libraries**

* extension ( **.ino** )

* **Serial Monitor:** used to **receive serial data from the board** and **send the serial data to the board**

* **Verify:** check your code for errors.

<!-- ![image](https://cdn.shopify.com/s/files/1/0506/1689/3647/products/A000066_03.front_970c6014-61ab-4226-a20f-14cc6d8d682c_1000x750.jpg?v=1629816078) -->

```c++

// Declaring the variable here 

void setup() {
	// Initialization pins function here
}

void loop() {
	// Doing something ( Operation ) here 
	// The loop routine runs over and over again forever
}

```


