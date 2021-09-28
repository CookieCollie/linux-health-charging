#!/bin/bash
value=$(cat /sys/class/power_supply/BAT0/charge_control_end_threshold)
echo "Current charge threshold: $value" 
read -p 'Change threshold? Y/N: ' condition

if [ "$condition" = "Y" -o "$condition" = "y" ]
then
    echo "Enter charge threshold: "
    read charge_threshold
    echo $charge_threshold | sudo tee /sys/class/power_supply/BAT0/charge_control_end_threshold

elif [ "$condition" = "N" -o "$condition" = "n" ]
then
    echo

else
    echo "Invalid input. Try again"

fi
