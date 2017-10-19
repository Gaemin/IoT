## Part I: Setup your Photon

### Step 1: Install Particle CLI:

First, you need to download [Node.js](https://nodejs.org/en/download/).  Chose the "Recommended for Most Users" option.  

#### If you are a Windows user:

After installation completes, open ‘Node.js Command Prompt’ and enter this command, followed by your password when prompted:
`npm install -g particle-cli`


#### If you are a Mac/Linux user:

After installation completes, open Terminal and enter this command, followed by your password when prompted:
`sudo npm install -g particle-cli`


This command will install Particle CLI to your computer.

#### To test that your particle command line tool was installed correctly

Type `particle help`

You should see a list of commands available to you.  If you get an error, you'll need to try to reinstall the particle command line tool.

### Step 2: Set up Your Particle Account.

If you haven't created a Particle account, [click here to create a new account](https://login.particle.io/signup).

After you have an account, return to your terminal/command line.  At the `$` prompt, type `particle login`, then follow the instructions to log in to your Particle account.

### Step 3: Connect your Photon using the USB

Connect your Particle device to your computer using the USB cable included in your kit.

After the device powers on, its onboard RGB LED should blink *blue* to indicate that the Photon is in "Listening Mode".  If your Photon is not in Listening Mode, press and hold the Mode button for 3 seconds until the onboard RGB LED blinks blue.

[This page](https://docs.particle.io/guide/getting-started/modes/photon/) provides information to help you interpret the different colors and blink sequences and their associated device modes.

### Step 4: Get the Mac Address of Your Photon

In your terminal, run `particle serial mac` to get the Photon’s mac address.  

### Step 5: Register Your Device to DukeOpen

Register your Photon's mac address at [DukeReg](https://dukereg.duke.edu/). (You will need to login with your NetId).   If you encounter issues in Firefox with the page loading, you may need to clear your browser's cookies and cache.

Be sure to give the device a clear description (e.g. "Photon Redboard 1") and to register the device type as *IoT Device*.

### Step 6: Set up and Claim Your Photon

Return to Node.js to begin the setup process of the Photon itself.
`particle serial wifi`

When prompted, choose or enter "DukeOpen" and choose "WPA2" for security type then type your password.

To claim your Photon (e.g. add it to your Particle account), you first need to get its deviceID.  With the Photon in Listening Mode, enter the following at the `$` prompt in your terminal/command line:
`particle serial identify`
and copy the deviceID that the command returns.

You'll need to now click the reset button on your device to have it connect to the wifi.  It should blink green and eventually get to "breathing cyan".

Now you can finally add the device to your Particle account using:
`particle device add <deviceID>`

Now you can finally give your device a human-readable name by using the following command:

`particle device rename <deviceID> "SomeGreatName"`

(Of course you'll use a more clever name than "SomeGreatName"!)

You can now deploy code to your Photon via the IDE (build.particle.io) or manually using the steps below.  In the IDE, click on the devices tab, then look for the device you just registered.  If all went well, you should see it there and be able to click “Signal” to test the connection to your Photon.  If the signal is successful, continue on to the SparkFun Inventor’s Kit for Photon Experiment Guide https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-for-photon-experiment-guide or the other tutorials here in this repo.

