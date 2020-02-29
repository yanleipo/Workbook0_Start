

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SensorType.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SensorType_1400245340_h
#define SensorType_1400245340_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *SensorDataTYPENAME;

}

struct SensorDataSeq;
#ifndef NDDS_STANDALONE_TYPE
class SensorDataTypeSupport;
class SensorDataDataWriter;
class SensorDataDataReader;
#endif
class SensorData 
{
  public:
    typedef struct SensorDataSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef SensorDataTypeSupport TypeSupport;
    typedef SensorDataDataWriter DataWriter;
    typedef SensorDataDataReader DataReader;
    #endif

    DDS_Char *   sensorName ;
    DDS_Float   val_0 ;
    DDS_Float   val_1 ;
    DDS_Float   val_2 ;
    DDS_Float   quality ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* SensorData_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *SensorData_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *SensorData_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *SensorData_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(SensorDataSeq, SensorData);

NDDSUSERDllExport
RTIBool SensorData_initialize(
    SensorData* self);

NDDSUSERDllExport
RTIBool SensorData_initialize_ex(
    SensorData* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool SensorData_initialize_w_params(
    SensorData* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool SensorData_finalize_w_return(
    SensorData* self);

NDDSUSERDllExport
void SensorData_finalize(
    SensorData* self);

NDDSUSERDllExport
void SensorData_finalize_ex(
    SensorData* self,RTIBool deletePointers);

NDDSUSERDllExport
void SensorData_finalize_w_params(
    SensorData* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void SensorData_finalize_optional_members(
    SensorData* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool SensorData_copy(
    SensorData* dst,
    const SensorData* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<SensorData> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* SensorType */

