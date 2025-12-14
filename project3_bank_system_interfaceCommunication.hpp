#pragma once

#include "project3_bank_system_string.hpp"

class InterfaceCommunication
{

public:
	virtual void SendEmail(string Title, string Body) = 0;
	virtual void SendFax(string Title, string Body) = 0;
	virtual void SendSMS(string Title, string Body) = 0;

};

