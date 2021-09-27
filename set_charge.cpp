#include <stdio.h>
#include <stdlib.h>

#define SCRIPT "                                                                                        \
#/bin/bash \n                                                                                           \
value=$(cat /sys/class/power_supply/BAT0/charge_control_end_threshold) \n                               \
echo \"Current charge threshold: $value\" \n                                                            \
read -p 'Change threshold? Y/N: ' condition \n                                                          \
\n                                                                                                      \
if [ \"$condition\" = \"Y\" -o \"$condition\" = \"y\" ] \n                                              \
then \n                                                                                                 \
    echo \"Enter charge threshold: \" \n                                                                \
    read charge_threshold \n                                                                            \
    echo $charge_threshold | sudo tee /sys/class/power_supply/BAT0/charge_control_end_threshold \n      \
\n                                                                                                      \
elif [ \"$condition\" = \"N\" -o \"$condition\" = \"n\" ] \n                                            \
then \n                                                                                                 \
    echo \n                                                                                             \
\n                                                                                                      \
else \n                                                                                                 \
    echo \"Invalid input. Try again\"                                                                   \
\n                                                                                                      \
fi                                                                                                      \
"

int main(int argc, char const *argv[])
{
    system(SCRIPT);
    return 0;
}