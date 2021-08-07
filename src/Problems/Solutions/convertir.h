/*
* Funcion que convierte los segundos, a un valor HH:MM:SS
*/
void convertir(const int segundos, int &h, int &m, int &s)
{
    const int pow2_60 = 60 * 60; // 60^2

    h = segundos / pow2_60;
    m = (segundos - pow2_60 * h) / 60;
    s = segundos - m * 60 - h * pow2_60;
}