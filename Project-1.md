# Project-1

## Deploying your Code to Photon manually via the Command Line

There are many different ways to push (or "flash") code to your Photon:

* Use the [online Particle IDE](https://build.particle.io) to write your code and flash the code to your Photon.
* Use the Atom-based [Desktop IDE](https://www.particle.io/products/development-tools/particle-desktop-ide) (Windows/Mac/Linux)
* Use the nano text editor and the particle-cli command line tools to flash the code to your Photon.

The instructions below outline how to use the particle-cli tool to create a simple script to blink the Photon Redboard's on-board LED.

### Step 1:  Create an .ino file

On your Desktop, or in your choice of a folder, create a file to store the project. 

You can do this in your terminal, with the following commands:

Step 1: Selet the folder in which you will create the folder:

If you want to create a folder (i.e., a directory) on your Desktop, you first need to route the terminal to the Desktop.

You can do this by typing the following command in terminal:

`cd Desktop`.

Now, you are routed to the Desktop. So, let's create a folder (i.e., a directory) named "firstPhoton":

`mkdir firstPhoton`

You are going to create programming files in this folder, so you have to route to the folder:

`cd firstPhoton`

Great! Now you are in 'firstPhoton' folder. 

Create a file called "blinky.ino": `touch blinky.ino`

Use the nano text editor to open the file:  `nano blinky.ino`

### Step 2:  Write code to blink the on-board LED (pin D7)

In line 1, declare your LED pin variable.  Since the onboard LED is attached to digital pin 7, we'll use:  

```
int led = D7;
```

Skip a line, and then use the `setup()` function to set the led pin to function as an OUTPUT:
```
void setup(){
    pinMode(led, OUTPUT);
}
```

Finally, we'll use the `loop()` function to blink the onboard LED on and off every second:
```
void loop(){
    digitalWrite(led, HIGH); //turn LED on
    delay(1000); // wait 1 sec
    digitalWrite(led, LOW); // turn LED off
    delay(1000); // wait another second
}
```

Press CTRL-x to save the file.



### Step 3: Log in to your Photon Account.

Type `particle login` in your terminal/command line window and then follow the instruction to login to your account.

### Step 4: Deploy your Code

Since we have only the one file to deploy, just type `particle flash DeviceName blinky.ino` (where `DeviceName` is the name you gave your Photon Redboard when you set it up in Part I).

Note: this command is only useful when your file is in your working directory. If the file is not in your working directory, you can either use $ cd to go to the working directory or replace the name of your file with absolute file path.

If your code is contained in several files, create a new folder and then put all the files (Include .h and .cpp library files) in that same folder, and then use `particle flash DeviceName path/folder` to deploy your code. The path/folder argument should be your folder's absolute file path.

Tips:

If you need to transfer your Photon to other users, be sure to go to [Particle Console](https://console.particle.io/devices) and click on the `...` to choose Unclaim Device. Otherwise, other users will not be able to claim this device.

If you have any other questions, contact your instructors and/or refer to [Particle CLI Docs](https://docs.particle.io/guide/tools-and-features/cli/photon/) for help.
