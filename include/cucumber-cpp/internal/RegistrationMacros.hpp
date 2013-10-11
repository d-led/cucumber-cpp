#ifndef CUKE_REGISTRATIONMACROS_HPP_
#define CUKE_REGISTRATIONMACROS_HPP_

// ************************************************************************** //
// **************            OBJECT NAMING MACROS              ************** //
// ************************************************************************** //

#ifndef CUKE_OBJECT_PREFIX
#define CUKE_OBJECT_PREFIX CukeObject
#endif

#define CUKE_GEN_OBJECT_NAME_ BOOST_JOIN(BOOST_JOIN(CUKE_OBJECT_PREFIX, __COUNTER__), __LINE__)

// ************************************************************************** //
// **************                 CUKE OBJECTS                 ************** //
// ************************************************************************** //

#define CUKE_OBJECT_(class_name, parent_class, registration_fn) \
class class_name : public parent_class {                                  \
public:                                                                   \
    void body();                                                      \
private:                                                                  \
    static const int cukeRegId;                                           \
};                                                                        \
const int class_name ::cukeRegId = registration_fn ;                      \
void class_name ::body()                                              \
/**/

#endif /* CUKE_REGISTRATIONMACROS_HPP_ */
