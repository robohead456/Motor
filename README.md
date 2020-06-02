# Motor

An abstract class for motor controllers to implement. Allows for creation of arrays with different types of motors/controllers.

## Methods

    virtual void setVoltage(float voltage) = 0;

Set the specified output voltage to the motor.

    virtual void enable() = 0; 

Enable the motor driver output

    virtual void disable() = 0;

Disable the motor driver output (coast)

    virtual float readCurrent() = 0;

Read current being drawn from the motor

    virtual float getLastVoltage() = 0;

Get the last voltage applied to the motor
