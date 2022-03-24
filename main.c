#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    //wait_for_light()
    create_connect();
    create_drive_straight(300);
    msleep(3450);
    enable_servos(1);
    set_servo_position(1,0);
    msleep(1000);
    create_drive_direct(-300,-300);
    msleep(2500);
    return 0;
}
