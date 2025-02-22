#include <stdio.h>
#include <windows.h>


int main () {

printf("\n\t\t\t\t|\tWelcome to the \"I'm bored sound_board\"! \t|");
printf("\n\n------------------------------------------------------------------------------------------------------------------------");
printf("\n\n\n\t alarm(a)\t | \t argh(z)\t | \t bang(e)\t | \t coughing(r) \t | \t goofy alarm(t)");
printf("\n\n\n\t idfk(q) \t | \t laugh(s) \t | \t loud shit(d) \t | \t oh my god (f) \t | \t hear me out (g)");
printf("\n\n\n\t ringtone(w)\t | \tshart(x)\t | \t slam(c) \t | \t violin(v) \t | \t wht the hell(b)");
printf("\n\n\n\t notification(y) | \t");
printf("\n\n\n------------------------------------------------------------------------------------------------------------------------");

char x;     // made by ilyesPR
while (1==1) {
    x = getch();
    switch (x) {
    case 'a': PlaySound("C:/Users/Djihad/Documents/C/sound_board/alarm.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME); break;
    case 'z': PlaySound("C:/Users/Djihad/Documents/C/sound_board/argh.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME); break;
    case 'e': PlaySound("C:/Users/Djihad/Documents/C/sound_board/bang2.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME); break;
    case 'r': PlaySound("C:/Users/Djihad/Documents/C/sound_board/coughing.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME); break;
    case 't': PlaySound("C:/Users/Djihad/Documents/C/sound_board/goofy_alarm.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME); break;
    case 'q': PlaySound("C:/Users/Djihad/Documents/C/sound_board/idfk.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME); break;
    case 's': PlaySound("C:/Users/Djihad/Documents/C/sound_board/laugh.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME); break;
    case 'd': PlaySound("C:/Users/Djihad/Documents/C/sound_board/loud_shit.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME); break;
    case 'f': PlaySound("C:/Users/Djihad/Documents/C/sound_board/oh_my_god.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME); break;
    case 'g': PlaySound("C:/Users/Djihad/Documents/C/sound_board/please_hear_me_out.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME); break;
    case 'w': PlaySound("C:/Users/Djihad/Documents/C/sound_board/ringtone.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME); break;
    case 'x': PlaySound("C:/Users/Djihad/Documents/C/sound_board/shart.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME); break;
    case 'c': PlaySound("C:/Users/Djihad/Documents/C/sound_board/slam.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME); break;
    case 'v': PlaySound("C:/Users/Djihad/Documents/C/sound_board/violin.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME); break;
    case 'b': PlaySound("C:/Users/Djihad/Documents/C/sound_board/what_the_hell_oh_my_god_no_way.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME); break;
    case 'y': PlaySound("C:/Users/Djihad/Documents/C/sound_board/samsung_notificiation.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME); break;
    }
}








}
