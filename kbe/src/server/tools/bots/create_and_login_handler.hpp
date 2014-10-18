/*
This source file is part of KBEngine
For the latest info, see http://www.kbengine.org/

Copyright (c) 2008-2012 KBEngine.

KBEngine is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

KBEngine is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.
 
You should have received a copy of the GNU Lesser General Public License
along with KBEngine.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef KBE_CREATE_AND_LOGIN_HANDLER_HPP
#define KBE_CREATE_AND_LOGIN_HANDLER_HPP

#include "cstdkbe/cstdkbe.hpp"
#include "cstdkbe/tasks.hpp"
#include "cstdkbe/timer.hpp"
#include "helper/debug_helper.hpp"

namespace KBEngine { 

class CreateAndLoginHandler : public TimerHandler
{
public:
	CreateAndLoginHandler();
	virtual ~CreateAndLoginHandler();

protected:
	virtual void handleTimeout(TimerHandle handle, void * arg);

	TimerHandle timerHandle_;

};



}

#endif // KBE_CREATE_AND_LOGIN_HANDLER_HPP
