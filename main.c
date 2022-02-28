#include <kipr/wombat.h>

int main()
{
   motor (0,-100);
    motor (3,-100);
    msleep (600);
    motor (0,-100);
    motor (3,-30);
    msleep (1800);
    motor (0,-100);
    motor (3,-100);
    msleep (4000);
    motor (0,-100);
    motor ( 3,-30);
    msleep (3000);
    motor (0,-100);
    motor (3,-100);
    msleep (3000);
    motor (0,100);
    motor (3,30);
    msleep (5000);
    motor (0,100);
    motor (3,100);
    msleep (2000);
    motor (0,90);
    motor (3,100);
    msleep (100);
    set_servo_position (0,1100);
    msleep (1000);
    return 0;
}
