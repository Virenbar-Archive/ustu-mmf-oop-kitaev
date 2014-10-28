#ifndef NOISEGEN_H
#define NOISEGEN_H
#include <SignalGen.h>

class NoiseGen : public SignalGen
{
public:
    NoiseGen();
    double GetSample(void);                 // метод получения последующего сэмпла от генератора
    void SetFrequency(double iFrequency);   // метод задания частоты генерируемого сигнала
    void SetAmplitude(double iAmplitude);   // метод задания амплитуды генерируемого сигнала
    void SetOffset(double iOffset);         // метод задания сдвига фазы относительно начала отсчёта по времени
    void ResetPosition();                   // метод сброса текущего времени
    void SetDiscrFrequency(int iDescrFreq); // метод задания частоты дискретизации сигнала

private:
    double Frequency;
    double Amplitude;
    double Offset;
    int DescrFreq;
    int Counter;
};

#endif // NOISEGEN_H