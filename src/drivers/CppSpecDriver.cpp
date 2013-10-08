#include <cucumber-cpp/internal/drivers/CppSpecDriver.hpp>

#include <CppSpec.h>

namespace cucumber {
namespace internal {

const InvokeResult CppSpecStep::invokeStepBody() {
    try {
        body();
        return InvokeResult::success();
    } catch (const ::CppSpec::SpecifyFailedException &e) {
        return InvokeResult::failure(e.message);
    }
}

}
}
