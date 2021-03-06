//------------------------------------------------------------------------------
//  pnaclModule.cc
//------------------------------------------------------------------------------
#include "Pre.h"
#include "pnaclModule.h"
#include "Core/pnacl/pnaclInstance.h"
#include "ppapi/gles2/gl2ext_ppapi.h"

namespace Oryol {
namespace _priv {
    
//------------------------------------------------------------------------------
pp::Instance* 
pnaclModule::CreateInstance(PP_Instance instance) {
    return new pnaclInstance(instance);
}

} // namespace _priv
} // namespace Oryol