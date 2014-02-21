int HCSR_cm(int triggerPin, int echoPin)
{
    long clocks = HCSRping(triggerPin,echoPin);
    int cm = clocks / 58;//
    return cm;
}

