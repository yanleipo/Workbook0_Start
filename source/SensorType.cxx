

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SensorType.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif 
#ifndef dds_c_log_infrastructure_h                      
#include "dds_c/dds_c_infrastructure_impl.h"       
#endif 

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "SensorType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "SensorTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *SensorDataTYPENAME = "SensorData";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* SensorData_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode SensorData_g_tc_sensorName_string = DDS_INITIALIZE_STRING_TYPECODE((255));

    static DDS_TypeCode_Member SensorData_g_tc_members[5]=
    {

        {
            (char *)"sensorName",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"val_0",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"val_1",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"val_2",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"quality",/* Member name */
            {
                4,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode SensorData_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"SensorData", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            SensorData_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for SensorData*/

    if (is_initialized) {
        return &SensorData_g_tc;
    }

    SensorData_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    SensorData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&SensorData_g_tc_sensorName_string;
    SensorData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float_w_new;
    SensorData_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float_w_new;
    SensorData_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float_w_new;
    SensorData_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float_w_new;

    /* Initialize the values for member annotations. */
    SensorData_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    SensorData_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    SensorData_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
    SensorData_g_tc_members[1]._annotations._defaultValue._u.float_value = 0.0f;
    SensorData_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    SensorData_g_tc_members[1]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
    SensorData_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    SensorData_g_tc_members[1]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    SensorData_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
    SensorData_g_tc_members[2]._annotations._defaultValue._u.float_value = 0.0f;
    SensorData_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    SensorData_g_tc_members[2]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
    SensorData_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    SensorData_g_tc_members[2]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    SensorData_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
    SensorData_g_tc_members[3]._annotations._defaultValue._u.float_value = 0.0f;
    SensorData_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    SensorData_g_tc_members[3]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
    SensorData_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    SensorData_g_tc_members[3]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    SensorData_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
    SensorData_g_tc_members[4]._annotations._defaultValue._u.float_value = 0.0f;
    SensorData_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    SensorData_g_tc_members[4]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
    SensorData_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    SensorData_g_tc_members[4]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    SensorData_g_tc._data._sampleAccessInfo =
    SensorData_get_sample_access_info();
    SensorData_g_tc._data._typePlugin =
    SensorData_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &SensorData_g_tc;
}

#define TSeq SensorDataSeq
#define T SensorData
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *SensorData_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo SensorData_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(SensorDataSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        SensorDataSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &SensorData_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *SensorData_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    SensorData *sample;

    static RTIXCdrMemberAccessInfo SensorData_g_memberAccessInfos[5] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo SensorData_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &SensorData_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        SensorData);
    if (sample == NULL) {
        return NULL;
    }

    SensorData_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->sensorName - (char *)sample);

    SensorData_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->val_0 - (char *)sample);

    SensorData_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->val_1 - (char *)sample);

    SensorData_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->val_2 - (char *)sample);

    SensorData_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->quality - (char *)sample);

    SensorData_g_sampleAccessInfo.memberAccessInfos = 
    SensorData_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(SensorData);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            SensorData_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            SensorData_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    SensorData_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    SensorData_g_sampleAccessInfo.getMemberValuePointerFcn = 
    SensorData_get_member_value_pointer;

    SensorData_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &SensorData_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *SensorData_get_type_plugin_info()
{
    static RTIXCdrTypePlugin SensorData_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        SensorData_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        SensorData_finalize_w_return,
        NULL
    };

    return &SensorData_g_typePlugin;
}
#endif

RTIBool SensorData_initialize(
    SensorData* sample) {
    return SensorData_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool SensorData_initialize_ex(
    SensorData* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return SensorData_initialize_w_params(
        sample,&allocParams);

}

RTIBool SensorData_initialize_w_params(
    SensorData* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        sample->sensorName = DDS_String_alloc((255));
        RTICdrType_copyStringEx(
            &sample->sensorName,
            "",
            (255),
            RTI_FALSE);
        if (sample->sensorName == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->sensorName != NULL) {
            RTICdrType_copyStringEx(
                &sample->sensorName,
                "",
                (255),
                RTI_FALSE);
            if (sample->sensorName == NULL) {
                return RTI_FALSE;
            }
        }
    }

    sample->val_0 = 0.0f;

    sample->val_1 = 0.0f;

    sample->val_2 = 0.0f;

    sample->quality = 0.0f;

    return RTI_TRUE;
}

RTIBool SensorData_finalize_w_return(
    SensorData* sample)
{
    SensorData_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void SensorData_finalize(
    SensorData* sample)
{

    SensorData_finalize_ex(sample,RTI_TRUE);
}

void SensorData_finalize_ex(
    SensorData* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    SensorData_finalize_w_params(
        sample,&deallocParams);
}

void SensorData_finalize_w_params(
    SensorData* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (sample->sensorName != NULL) {
        DDS_String_free(sample->sensorName);
        sample->sensorName=NULL;

    }

}

void SensorData_finalize_optional_members(
    SensorData* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool SensorData_copy(
    SensorData* dst,
    const SensorData* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyStringEx (
            &dst->sensorName, src->sensorName, 
            (255) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!RTICdrType_copyFloat (
            &dst->val_0, &src->val_0)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyFloat (
            &dst->val_1, &src->val_1)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyFloat (
            &dst->val_2, &src->val_2)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyFloat (
            &dst->quality, &src->quality)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'SensorData' sequence class.
*/
#define T SensorData
#define TSeq SensorDataSeq

#define T_initialize_w_params SensorData_initialize_w_params

#define T_finalize_w_params   SensorData_finalize_w_params
#define T_copy       SensorData_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<SensorData>::get() 
        {
            return (const RTIXCdrTypeCode *) SensorData_get_typecode();
        }

    } 
}
#endif
