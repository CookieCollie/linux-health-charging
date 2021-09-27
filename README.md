# linux-health-charging


## Overview
This repository will help limit the battery charging threshold to extend its life. Highly suitable for people who like to plug in their laptops all the time.\
The ideal charge limit is anything between 50-60. You can also set it to any value you like. Alternatively, you can set it to 100 to revert the changes.

\
***Note: This repository has just been only tested on an ASUS ROG STRIX G laptop running Kali Linux, so I will not guarantee that it will always work on any 
machines or distros.***


## Usage
- Clone the repository, which contains the file named [health-charge](https://github.com/CookieCollie/linux-health-charging/tree/main/health-charge)
- Put the file anywhere you like, but don't forget the path to [set_charge.sh](https://github.com/CookieCollie/linux-health-charging/blob/main/health-charge/set_charge.sh)


## How to use it?
### Through terminal
```
sh the/file/path/to/set_charge.sh
```


### By creating a shortcut
- **Step 1:** Create a .desktop file. This will be your shortcut.
```
nano /where/you/want/your/shortcut/to/go/<any name you like>.desktop
```
- **Step 2:** Copy everything down below and paste into your .desktop file. Remember to change 'Name' and 'Exec'.
```
[Desktop Entry]
Type=Application
Terminal=true
Name=<the name of your shortcut>
Exec=/path/to/set_charge.sh
```
- **Step 3:** Save and run!

