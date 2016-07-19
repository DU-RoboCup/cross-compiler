#include <glib-object.h>
#include <dbus/dbus-glib.h>
#include <telepathy-glib/dbus-properties-mixin.h>

G_BEGIN_DECLS

typedef struct _TpSvcChannelDispatcher TpSvcChannelDispatcher;

typedef struct _TpSvcChannelDispatcherClass TpSvcChannelDispatcherClass;

GType tp_svc_channel_dispatcher_get_type (void);
#define TP_TYPE_SVC_CHANNEL_DISPATCHER \
  (tp_svc_channel_dispatcher_get_type ())
#define TP_SVC_CHANNEL_DISPATCHER(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj), TP_TYPE_SVC_CHANNEL_DISPATCHER, TpSvcChannelDispatcher))
#define TP_IS_SVC_CHANNEL_DISPATCHER(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj), TP_TYPE_SVC_CHANNEL_DISPATCHER))
#define TP_SVC_CHANNEL_DISPATCHER_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_INTERFACE((obj), TP_TYPE_SVC_CHANNEL_DISPATCHER, TpSvcChannelDispatcherClass))


typedef void (*tp_svc_channel_dispatcher_create_channel_impl) (TpSvcChannelDispatcher *self,
    const gchar *in_Account,
    GHashTable *in_Requested_Properties,
    gint64 in_User_Action_Time,
    const gchar *in_Preferred_Handler,
    DBusGMethodInvocation *context);
void tp_svc_channel_dispatcher_implement_create_channel (TpSvcChannelDispatcherClass *klass, tp_svc_channel_dispatcher_create_channel_impl impl);
static inline
/* this comment is to stop gtkdoc realising this is static */
void tp_svc_channel_dispatcher_return_from_create_channel (DBusGMethodInvocation *context,
    const gchar *out_Request);
static inline void
tp_svc_channel_dispatcher_return_from_create_channel (DBusGMethodInvocation *context,
    const gchar *out_Request)
{
  dbus_g_method_return (context,
      out_Request);
}

typedef void (*tp_svc_channel_dispatcher_ensure_channel_impl) (TpSvcChannelDispatcher *self,
    const gchar *in_Account,
    GHashTable *in_Requested_Properties,
    gint64 in_User_Action_Time,
    const gchar *in_Preferred_Handler,
    DBusGMethodInvocation *context);
void tp_svc_channel_dispatcher_implement_ensure_channel (TpSvcChannelDispatcherClass *klass, tp_svc_channel_dispatcher_ensure_channel_impl impl);
static inline
/* this comment is to stop gtkdoc realising this is static */
void tp_svc_channel_dispatcher_return_from_ensure_channel (DBusGMethodInvocation *context,
    const gchar *out_Request);
static inline void
tp_svc_channel_dispatcher_return_from_ensure_channel (DBusGMethodInvocation *context,
    const gchar *out_Request)
{
  dbus_g_method_return (context,
      out_Request);
}

typedef void (*tp_svc_channel_dispatcher_create_channel_with_hints_impl) (TpSvcChannelDispatcher *self,
    const gchar *in_Account,
    GHashTable *in_Requested_Properties,
    gint64 in_User_Action_Time,
    const gchar *in_Preferred_Handler,
    GHashTable *in_Hints,
    DBusGMethodInvocation *context);
void tp_svc_channel_dispatcher_implement_create_channel_with_hints (TpSvcChannelDispatcherClass *klass, tp_svc_channel_dispatcher_create_channel_with_hints_impl impl);
static inline
/* this comment is to stop gtkdoc realising this is static */
void tp_svc_channel_dispatcher_return_from_create_channel_with_hints (DBusGMethodInvocation *context,
    const gchar *out_Request);
static inline void
tp_svc_channel_dispatcher_return_from_create_channel_with_hints (DBusGMethodInvocation *context,
    const gchar *out_Request)
{
  dbus_g_method_return (context,
      out_Request);
}

typedef void (*tp_svc_channel_dispatcher_ensure_channel_with_hints_impl) (TpSvcChannelDispatcher *self,
    const gchar *in_Account,
    GHashTable *in_Requested_Properties,
    gint64 in_User_Action_Time,
    const gchar *in_Preferred_Handler,
    GHashTable *in_Hints,
    DBusGMethodInvocation *context);
void tp_svc_channel_dispatcher_implement_ensure_channel_with_hints (TpSvcChannelDispatcherClass *klass, tp_svc_channel_dispatcher_ensure_channel_with_hints_impl impl);
static inline
/* this comment is to stop gtkdoc realising this is static */
void tp_svc_channel_dispatcher_return_from_ensure_channel_with_hints (DBusGMethodInvocation *context,
    const gchar *out_Request);
static inline void
tp_svc_channel_dispatcher_return_from_ensure_channel_with_hints (DBusGMethodInvocation *context,
    const gchar *out_Request)
{
  dbus_g_method_return (context,
      out_Request);
}


typedef struct _TpSvcChannelDispatcherInterfaceOperationList TpSvcChannelDispatcherInterfaceOperationList;

typedef struct _TpSvcChannelDispatcherInterfaceOperationListClass TpSvcChannelDispatcherInterfaceOperationListClass;

GType tp_svc_channel_dispatcher_interface_operation_list_get_type (void);
#define TP_TYPE_SVC_CHANNEL_DISPATCHER_INTERFACE_OPERATION_LIST \
  (tp_svc_channel_dispatcher_interface_operation_list_get_type ())
#define TP_SVC_CHANNEL_DISPATCHER_INTERFACE_OPERATION_LIST(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj), TP_TYPE_SVC_CHANNEL_DISPATCHER_INTERFACE_OPERATION_LIST, TpSvcChannelDispatcherInterfaceOperationList))
#define TP_IS_SVC_CHANNEL_DISPATCHER_INTERFACE_OPERATION_LIST(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj), TP_TYPE_SVC_CHANNEL_DISPATCHER_INTERFACE_OPERATION_LIST))
#define TP_SVC_CHANNEL_DISPATCHER_INTERFACE_OPERATION_LIST_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_INTERFACE((obj), TP_TYPE_SVC_CHANNEL_DISPATCHER_INTERFACE_OPERATION_LIST, TpSvcChannelDispatcherInterfaceOperationListClass))


void tp_svc_channel_dispatcher_interface_operation_list_emit_new_dispatch_operation (gpointer instance,
    const gchar *arg_Dispatch_Operation,
    GHashTable *arg_Properties);
void tp_svc_channel_dispatcher_interface_operation_list_emit_dispatch_operation_finished (gpointer instance,
    const gchar *arg_Dispatch_Operation);


G_END_DECLS
