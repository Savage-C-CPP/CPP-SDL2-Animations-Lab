#include "CApp.h"

void CApp::OnLoop()
{
    // Двигать перо по точкам из траектории, пока траектория не кончится
    // Когда траектория кончилась, брать текущее положение пера и следующую вершину, и так пока вершина не есть последняя
    // Когда последняя, всё повторяется с новым цветом
    OnPenTick();
}
