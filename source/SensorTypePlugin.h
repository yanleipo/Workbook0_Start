

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SensorType.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SensorTypePlugin_1400245340_h
#define SensorTypePlugin_1400245340_h

#include "SensorType.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C" {

    #define SensorDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define SensorDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define SensorDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define SensorDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define SensorDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern SensorData*
    SensorDataPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern SensorData*
    SensorDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern SensorData*
    SensorDataPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    SensorDataPluginSupport_copy_data(
        SensorData *out,
        const SensorData *in);

    NDDSUSERDllExport extern void 
    SensorDataPluginSupport_destroy_data_w_params(
        SensorData *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    SensorDataPluginSupport_destroy_data_ex(
        SensorData *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    SensorDataPluginSupport_destroy_data(
        SensorData *sample);

    NDDSUSERDllExport extern void 
    SensorDataPluginSupport_print_data(
        const SensorData *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    SensorDataPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    SensorDataPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    SensorDataPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    SensorDataPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    SensorDataPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        SensorData *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    SensorDataPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        SensorData *out,
        const SensorData *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    SensorDataPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const SensorData *sample); 

    NDDSUSERDllExport extern RTIBool
    SensorDataPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const SensorData *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    SensorDataPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        SensorData **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    SensorDataPlugin_deserialize_from_cdr_buffer(
        SensorData *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    SensorDataPlugin_data_to_string(
        const SensorData *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    SensorDataPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    SensorDataPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    SensorDataPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    SensorDataPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    SensorDataPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        SensorData ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *SensorDataPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    SensorDataPlugin_new(void);

    NDDSUSERDllExport extern void
    SensorDataPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SensorTypePlugin_1400245340_h */

