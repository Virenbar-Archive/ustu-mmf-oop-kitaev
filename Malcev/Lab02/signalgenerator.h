﻿#ifndef SIGNALGENERATOR_H
#define SIGNALGENERATOR_H


class SignalGenerator
{
public:
    virtual double GetSample() = 0;
    virtual void ResetPostion() = 0;
    virtual void SetAmplitude(double iAmplitude) = 0;
    virtual void SetFrequency(double iFrequency) = 0;
    virtual void SetOffset(double iOffset) = 0;
    virtual void SetDescretizationFrequency(int iDiscrFreq) = 0;
};

#endif // SIGNALGENERATOR_H
