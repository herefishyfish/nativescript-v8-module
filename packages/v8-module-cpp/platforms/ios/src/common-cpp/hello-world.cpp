#include "hello-world.h"
#include "helpers.h"

namespace helloworld
{
void install(v8::Isolate *isolate)
{

    CreateJSModule("HelloWorld", {

        CreateFunction("sayHelloWorld", {
            info.GetReturnValue().Set(toJSString("hello world"));
        })


    })
}
}
