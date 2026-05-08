/*
    Copyright (c) 2026 Mulberry Contributors. All rights reserved.

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef __XMLSAXDEFAULT__XMLLIB__
#define __XMLSAXDEFAULT__XMLLIB__

#ifdef HAVE_LIBXML2
#include "XMLSAXlibxml2.h"
namespace xmllib {
	typedef XMLSAXlibxml2 XMLSAXDefault;
}
#else
#include "XMLSAXSimple.h"
namespace xmllib {
	typedef XMLSAXSimple XMLSAXDefault;
}
#endif

#endif
