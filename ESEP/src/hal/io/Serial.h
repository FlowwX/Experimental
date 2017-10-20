/*
 * Serial.h
 *
 *  Created on: 17.10.2017
 *      Author: flori
 */

#ifndef HAL_IO_SERIAL_H_
#define HAL_IO_SERIAL_H_

class Serial {
public:
	Serial();
	virtual ~Serial();

	/**
	 *
	 */
	void init(int baud);

	/**
	 *
	 */
	int send(char* buffer, unsigned char numBytes);

	/**
	 *
	 */
	int recv(char* p);

};

#endif /* HAL_IO_SERIAL_H_ */
