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


#ifndef KBENGINE_REMOTE_ENTITY_METHOD_HPP
#define KBENGINE_REMOTE_ENTITY_METHOD_HPP

#include "cstdkbe/cstdkbe.hpp"
#if KBE_PLATFORM == PLATFORM_WIN32
#pragma warning (disable : 4910)
#pragma warning (disable : 4251)
#endif
#include "datatype.hpp"
#include "datatypes.hpp"
#include "helper/debug_helper.hpp"
#include "network/packet.hpp"
#include "entitymailboxabstract.hpp"
#include "pyscript/scriptobject.hpp"	


namespace KBEngine{

class MethodDescription;

class RemoteEntityMethod : public script::ScriptObject
{
	/** 子类化 将一些py操作填充进派生类 */
	INSTANCE_SCRIPT_HREADER(RemoteEntityMethod, script::ScriptObject)	
public:	
	RemoteEntityMethod(MethodDescription* methodDescription, 
						EntityMailboxAbstract* mailbox, PyTypeObject* pyType = NULL);
	
	virtual ~RemoteEntityMethod();

	const char* getName(void)const;

	MethodDescription* getDescription(void)const
	{ 
		return methodDescription_; 
	}

	static PyObject* tp_call(PyObject* self, 
			PyObject* args, PyObject* kwds);

	EntityMailboxAbstract* getMailbox(void)const 
	{
		return pMailbox_; 
	}
protected:	
	MethodDescription*		methodDescription_;					// 这个方法的描述
	EntityMailboxAbstract*	pMailbox_;							// 这个方法所属的mailbox
};
}

#endif // KBENGINE_REMOTE_ENTITY_METHOD_HPP
