#ifndef SCHEDULEDIO_H
#define SCHEDULEDIO_H

inline void openInjector1();
inline void closeInjector1();
inline void beginCoil1Charge();
inline void endCoil1Charge();

inline void openInjector2();
inline void closeInjector2();
inline void beginCoil2Charge();
inline void endCoil2Charge();

inline void openInjector3();
inline void closeInjector3();
inline void beginCoil3Charge();
inline void endCoil3Charge();

//inline void openInjector4();
//inline void closeInjector4();
inline void beginCoil4Charge();
inline void endCoil4Charge();

inline void openInjector5();
inline void closeInjector5();
inline void beginCoil5Charge();
inline void endCoil5Charge();

/*
#define openInjector1() *inj1_pin_port |= (inj1_pin_mask); BIT_SET(currentStatus.squirt, BIT_SQUIRT_INJ1)
#define closeInjector1() *inj1_pin_port &= ~(inj1_pin_mask);  BIT_CLEAR(currentStatus.squirt, BIT_SQUIRT_INJ1)
#define openInjector2() *inj2_pin_port |= (inj2_pin_mask); BIT_SET(currentStatus.squirt, BIT_SQUIRT_INJ2)
#define closeInjector2() *inj2_pin_port &= ~(inj2_pin_mask);  BIT_CLEAR(currentStatus.squirt, BIT_SQUIRT_INJ2)
#define openInjector3() *inj3_pin_port |= (inj3_pin_mask); BIT_SET(currentStatus.squirt, BIT_SQUIRT_INJ3)
#define closeInjector3() *inj3_pin_port &= ~(inj3_pin_mask);  BIT_CLEAR(currentStatus.squirt, BIT_SQUIRT_INJ3)
#define openInjector4() *inj4_pin_port |= (inj4_pin_mask); BIT_SET(currentStatus.squirt, BIT_SQUIRT_INJ4)
#define closeInjector4() *inj4_pin_port &= ~(inj4_pin_mask);  BIT_CLEAR(currentStatus.squirt, BIT_SQUIRT_INJ4)

#define openInjector1and4() openInjector1(); openInjector4()
#define closeInjector1and4() closeInjector1(); closeInjector4()
#define openInjector2and3() openInjector2(); openInjector2()
#define closeInjector2and3() closeInjector2(); closeInjector2()

//5 cylinder support doubles up injector 3 as being closese to inj 5 (Crank angle)
#define openInjector3and5() openInjector3(); openInjector5()
#define closeInjector3and5() closeInjector3(); closeInjector5()
*/
#define openInjector1() *inj1_pin_port |= (inj1_pin_mask); BIT_SET(currentStatus.squirt, BIT_SQUIRT_INJ1)
#define closeInjector1() *inj1_pin_port &= ~(inj1_pin_mask);  BIT_CLEAR(currentStatus.squirt, BIT_SQUIRT_INJ1)
#define openInjector2() *inj2_pin_port |= (inj2_pin_mask); BIT_SET(currentStatus.squirt, BIT_SQUIRT_INJ2)
#define closeInjector2() *inj2_pin_port &= ~(inj2_pin_mask);  BIT_CLEAR(currentStatus.squirt, BIT_SQUIRT_INJ2)
#define openInjector3() *inj3_pin_port |= (inj3_pin_mask); BIT_SET(currentStatus.squirt, BIT_SQUIRT_INJ3)
#define closeInjector3() *inj3_pin_port &= ~(inj3_pin_mask);  BIT_CLEAR(currentStatus.squirt, BIT_SQUIRT_INJ3)
#define openInjector4() *inj4_pin_port |= (inj4_pin_mask); BIT_SET(currentStatus.squirt, BIT_SQUIRT_INJ4)
#define closeInjector4() *inj4_pin_port &= ~(inj4_pin_mask);  BIT_CLEAR(currentStatus.squirt, BIT_SQUIRT_INJ4)

#define openInjector1and4() openInjector1(); openInjector4()
#define closeInjector1and4() closeInjector1(); closeInjector4()
#define openInjector2and3() openInjector2(); openInjector2()
#define closeInjector2and3() closeInjector2(); closeInjector2()

//5 cylinder support doubles up injector 3 as being closese to inj 5 (Crank angle)
#define openInjector3and5() openInjector3(); openInjector5()
#define closeInjector3and5() closeInjector3(); closeInjector5()

#endif
