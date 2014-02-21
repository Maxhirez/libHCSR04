int HCSR_inches(int triggerPin, int echoPin)
{
    long clocks = HCSRping(triggerPin,echoPin);
    int in = clocks / 148;
    return in;
}

