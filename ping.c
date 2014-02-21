
int HCSRping(int triggerPin, int echoPin)
{
    low(triggerPin);
    pulse_out(triggerPin, 10);
    high(triggerPin);
    low(echoPin);
    return pulse_in(echoPin, 1);
    high(echoPin);
}
