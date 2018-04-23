#include "MCP3424.h"

#include <QDebug>

namespace QutiPi { namespace Hardware { namespace Hardware
{

    /**
     * Class constructure performs
     *      - @todo
     *
     * @brief MCP3424::MCP3424
     */
    MCP3424::MCP3424(I2C ic)
    {
        qDebug() << "Init MCP3424 location: " << ic.location << " Address:" << ic.address << " Bitrate: " << NINE;
    }


    /**
     * Class detructure performs:
     *      - @todo
     *
     * @brief MCP3424::~MCP3424
     */
    MCP3424::~MCP3424(I2C ic)
    {
        qDebug() << "Destory MCP3424 location: " << ic.location << " Address:" << ic.address;;
    }


    void setup(I2C ic, BITRATE bitrate)
    {

    }


    /**
     * Reads the value for a specified port
     *
     * @brief MCP3424::read
     * @param port the port number of the ADC
     *              - from 1:4
     * @return int voltage in digital format
     */
    int MCP3424::read(int port)
    {
        return 10 + port;
    }


    void MCP3424::setResolution(Bitrate res)
    {

    }

    void MCP3424::setConversion(Conversion mode)
    {

    }

    void MCP3424::setGain(Gain gain)
    {

    }


}}}

