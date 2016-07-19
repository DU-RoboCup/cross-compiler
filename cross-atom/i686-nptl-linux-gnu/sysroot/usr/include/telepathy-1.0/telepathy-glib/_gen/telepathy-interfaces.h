/* Generated from: telepathy-glib



 */


#define TP_IFACE_CONNECTION_MANAGER \
"org.freedesktop.Telepathy.ConnectionManager"

#define TP_IFACE_QUARK_CONNECTION_MANAGER \
  (tp_iface_quark_connection_manager ())

GQuark tp_iface_quark_connection_manager (void);


#define TP_PROP_CONNECTION_MANAGER_PROTOCOLS \
"org.freedesktop.Telepathy.ConnectionManager.Protocols"

#define TP_PROP_CONNECTION_MANAGER_INTERFACES \
"org.freedesktop.Telepathy.ConnectionManager.Interfaces"

#define TP_IFACE_PROTOCOL \
"org.freedesktop.Telepathy.Protocol"

#define TP_IFACE_QUARK_PROTOCOL \
  (tp_iface_quark_protocol ())

GQuark tp_iface_quark_protocol (void);


#define TP_PROP_PROTOCOL_INTERFACES \
"org.freedesktop.Telepathy.Protocol.Interfaces"

#define TP_PROP_PROTOCOL_PARAMETERS \
"org.freedesktop.Telepathy.Protocol.Parameters"

#define TP_PROP_PROTOCOL_CONNECTION_INTERFACES \
"org.freedesktop.Telepathy.Protocol.ConnectionInterfaces"

#define TP_PROP_PROTOCOL_REQUESTABLE_CHANNEL_CLASSES \
"org.freedesktop.Telepathy.Protocol.RequestableChannelClasses"

#define TP_PROP_PROTOCOL_VCARD_FIELD \
"org.freedesktop.Telepathy.Protocol.VCardField"

#define TP_PROP_PROTOCOL_ENGLISH_NAME \
"org.freedesktop.Telepathy.Protocol.EnglishName"

#define TP_PROP_PROTOCOL_ICON \
"org.freedesktop.Telepathy.Protocol.Icon"

#define TP_PROP_PROTOCOL_AUTHENTICATION_TYPES \
"org.freedesktop.Telepathy.Protocol.AuthenticationTypes"

#define TP_IFACE_PROTOCOL_INTERFACE_AVATARS \
"org.freedesktop.Telepathy.Protocol.Interface.Avatars"

#define TP_IFACE_QUARK_PROTOCOL_INTERFACE_AVATARS \
  (tp_iface_quark_protocol_interface_avatars ())

GQuark tp_iface_quark_protocol_interface_avatars (void);


#define TP_PROP_PROTOCOL_INTERFACE_AVATARS_SUPPORTED_AVATAR_MIME_TYPES \
"org.freedesktop.Telepathy.Protocol.Interface.Avatars.SupportedAvatarMIMETypes"

#define TP_PROP_PROTOCOL_INTERFACE_AVATARS_MINIMUM_AVATAR_HEIGHT \
"org.freedesktop.Telepathy.Protocol.Interface.Avatars.MinimumAvatarHeight"

#define TP_PROP_PROTOCOL_INTERFACE_AVATARS_MINIMUM_AVATAR_WIDTH \
"org.freedesktop.Telepathy.Protocol.Interface.Avatars.MinimumAvatarWidth"

#define TP_PROP_PROTOCOL_INTERFACE_AVATARS_RECOMMENDED_AVATAR_HEIGHT \
"org.freedesktop.Telepathy.Protocol.Interface.Avatars.RecommendedAvatarHeight"

#define TP_PROP_PROTOCOL_INTERFACE_AVATARS_RECOMMENDED_AVATAR_WIDTH \
"org.freedesktop.Telepathy.Protocol.Interface.Avatars.RecommendedAvatarWidth"

#define TP_PROP_PROTOCOL_INTERFACE_AVATARS_MAXIMUM_AVATAR_HEIGHT \
"org.freedesktop.Telepathy.Protocol.Interface.Avatars.MaximumAvatarHeight"

#define TP_PROP_PROTOCOL_INTERFACE_AVATARS_MAXIMUM_AVATAR_WIDTH \
"org.freedesktop.Telepathy.Protocol.Interface.Avatars.MaximumAvatarWidth"

#define TP_PROP_PROTOCOL_INTERFACE_AVATARS_MAXIMUM_AVATAR_BYTES \
"org.freedesktop.Telepathy.Protocol.Interface.Avatars.MaximumAvatarBytes"

#define TP_IFACE_PROTOCOL_INTERFACE_PRESENCE \
"org.freedesktop.Telepathy.Protocol.Interface.Presence"

#define TP_IFACE_QUARK_PROTOCOL_INTERFACE_PRESENCE \
  (tp_iface_quark_protocol_interface_presence ())

GQuark tp_iface_quark_protocol_interface_presence (void);


#define TP_PROP_PROTOCOL_INTERFACE_PRESENCE_STATUSES \
"org.freedesktop.Telepathy.Protocol.Interface.Presence.Statuses"

#define TP_IFACE_CONNECTION \
"org.freedesktop.Telepathy.Connection"

#define TP_IFACE_QUARK_CONNECTION \
  (tp_iface_quark_connection ())

GQuark tp_iface_quark_connection (void);


#define TP_PROP_CONNECTION_INTERFACES \
"org.freedesktop.Telepathy.Connection.Interfaces"

#define TP_PROP_CONNECTION_SELF_HANDLE \
"org.freedesktop.Telepathy.Connection.SelfHandle"

#define TP_PROP_CONNECTION_STATUS \
"org.freedesktop.Telepathy.Connection.Status"

#define TP_PROP_CONNECTION_HAS_IMMORTAL_HANDLES \
"org.freedesktop.Telepathy.Connection.HasImmortalHandles"

#define TP_TOKEN_CONNECTION_CONTACT_ID \
"org.freedesktop.Telepathy.Connection/contact-id"

#define TP_IFACE_CONNECTION_INTERFACE_ALIASING \
"org.freedesktop.Telepathy.Connection.Interface.Aliasing"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_ALIASING \
  (tp_iface_quark_connection_interface_aliasing ())

GQuark tp_iface_quark_connection_interface_aliasing (void);


#define TP_TOKEN_CONNECTION_INTERFACE_ALIASING_ALIAS \
"org.freedesktop.Telepathy.Connection.Interface.Aliasing/alias"

#define TP_IFACE_CONNECTION_INTERFACE_ANONYMITY \
"org.freedesktop.Telepathy.Connection.Interface.Anonymity"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_ANONYMITY \
  (tp_iface_quark_connection_interface_anonymity ())

GQuark tp_iface_quark_connection_interface_anonymity (void);


#define TP_PROP_CONNECTION_INTERFACE_ANONYMITY_SUPPORTED_ANONYMITY_MODES \
"org.freedesktop.Telepathy.Connection.Interface.Anonymity.SupportedAnonymityModes"

#define TP_PROP_CONNECTION_INTERFACE_ANONYMITY_ANONYMITY_MANDATORY \
"org.freedesktop.Telepathy.Connection.Interface.Anonymity.AnonymityMandatory"

#define TP_PROP_CONNECTION_INTERFACE_ANONYMITY_ANONYMITY_MODES \
"org.freedesktop.Telepathy.Connection.Interface.Anonymity.AnonymityModes"

#define TP_IFACE_CONNECTION_INTERFACE_AVATARS \
"org.freedesktop.Telepathy.Connection.Interface.Avatars"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_AVATARS \
  (tp_iface_quark_connection_interface_avatars ())

GQuark tp_iface_quark_connection_interface_avatars (void);


#define TP_PROP_CONNECTION_INTERFACE_AVATARS_SUPPORTED_AVATAR_MIME_TYPES \
"org.freedesktop.Telepathy.Connection.Interface.Avatars.SupportedAvatarMIMETypes"

#define TP_PROP_CONNECTION_INTERFACE_AVATARS_MINIMUM_AVATAR_HEIGHT \
"org.freedesktop.Telepathy.Connection.Interface.Avatars.MinimumAvatarHeight"

#define TP_PROP_CONNECTION_INTERFACE_AVATARS_MINIMUM_AVATAR_WIDTH \
"org.freedesktop.Telepathy.Connection.Interface.Avatars.MinimumAvatarWidth"

#define TP_PROP_CONNECTION_INTERFACE_AVATARS_RECOMMENDED_AVATAR_HEIGHT \
"org.freedesktop.Telepathy.Connection.Interface.Avatars.RecommendedAvatarHeight"

#define TP_PROP_CONNECTION_INTERFACE_AVATARS_RECOMMENDED_AVATAR_WIDTH \
"org.freedesktop.Telepathy.Connection.Interface.Avatars.RecommendedAvatarWidth"

#define TP_PROP_CONNECTION_INTERFACE_AVATARS_MAXIMUM_AVATAR_HEIGHT \
"org.freedesktop.Telepathy.Connection.Interface.Avatars.MaximumAvatarHeight"

#define TP_PROP_CONNECTION_INTERFACE_AVATARS_MAXIMUM_AVATAR_WIDTH \
"org.freedesktop.Telepathy.Connection.Interface.Avatars.MaximumAvatarWidth"

#define TP_PROP_CONNECTION_INTERFACE_AVATARS_MAXIMUM_AVATAR_BYTES \
"org.freedesktop.Telepathy.Connection.Interface.Avatars.MaximumAvatarBytes"

#define TP_TOKEN_CONNECTION_INTERFACE_AVATARS_TOKEN \
"org.freedesktop.Telepathy.Connection.Interface.Avatars/token"

#define TP_IFACE_CONNECTION_INTERFACE_BALANCE \
"org.freedesktop.Telepathy.Connection.Interface.Balance"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_BALANCE \
  (tp_iface_quark_connection_interface_balance ())

GQuark tp_iface_quark_connection_interface_balance (void);


#define TP_PROP_CONNECTION_INTERFACE_BALANCE_ACCOUNT_BALANCE \
"org.freedesktop.Telepathy.Connection.Interface.Balance.AccountBalance"

#define TP_PROP_CONNECTION_INTERFACE_BALANCE_MANAGE_CREDIT_URI \
"org.freedesktop.Telepathy.Connection.Interface.Balance.ManageCreditURI"

#define TP_IFACE_CONNECTION_INTERFACE_CAPABILITIES \
"org.freedesktop.Telepathy.Connection.Interface.Capabilities"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_CAPABILITIES \
  (tp_iface_quark_connection_interface_capabilities ())

GQuark tp_iface_quark_connection_interface_capabilities (void);


#define TP_TOKEN_CONNECTION_INTERFACE_CAPABILITIES_CAPS \
"org.freedesktop.Telepathy.Connection.Interface.Capabilities/caps"

#define TP_IFACE_CONNECTION_INTERFACE_CELLULAR \
"org.freedesktop.Telepathy.Connection.Interface.Cellular"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_CELLULAR \
  (tp_iface_quark_connection_interface_cellular ())

GQuark tp_iface_quark_connection_interface_cellular (void);


#define TP_PROP_CONNECTION_INTERFACE_CELLULAR_MESSAGE_VALIDITY_PERIOD \
"org.freedesktop.Telepathy.Connection.Interface.Cellular.MessageValidityPeriod"

#define TP_PROP_CONNECTION_INTERFACE_CELLULAR_OVERRIDE_MESSAGE_SERVICE_CENTRE \
"org.freedesktop.Telepathy.Connection.Interface.Cellular.OverrideMessageServiceCentre"

#define TP_PROP_CONNECTION_INTERFACE_CELLULAR_MESSAGE_SERVICE_CENTRE \
"org.freedesktop.Telepathy.Connection.Interface.Cellular.MessageServiceCentre"

#define TP_PROP_CONNECTION_INTERFACE_CELLULAR_IMSI \
"org.freedesktop.Telepathy.Connection.Interface.Cellular.IMSI"

#define TP_PROP_CONNECTION_INTERFACE_CELLULAR_MESSAGE_REDUCED_CHARACTER_SET \
"org.freedesktop.Telepathy.Connection.Interface.Cellular.MessageReducedCharacterSet"

#define TP_PROP_CONNECTION_INTERFACE_CELLULAR_MESSAGE_NATIONAL_CHARACTER_SET \
"org.freedesktop.Telepathy.Connection.Interface.Cellular.MessageNationalCharacterSet"

#define TP_IFACE_CONNECTION_INTERFACE_CLIENT_TYPES \
"org.freedesktop.Telepathy.Connection.Interface.ClientTypes"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_CLIENT_TYPES \
  (tp_iface_quark_connection_interface_client_types ())

GQuark tp_iface_quark_connection_interface_client_types (void);


#define TP_TOKEN_CONNECTION_INTERFACE_CLIENT_TYPES_CLIENT_TYPES \
"org.freedesktop.Telepathy.Connection.Interface.ClientTypes/client-types"

#define TP_IFACE_CONNECTION_INTERFACE_CONTACT_BLOCKING \
"org.freedesktop.Telepathy.Connection.Interface.ContactBlocking"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_CONTACT_BLOCKING \
  (tp_iface_quark_connection_interface_contact_blocking ())

GQuark tp_iface_quark_connection_interface_contact_blocking (void);


#define TP_PROP_CONNECTION_INTERFACE_CONTACT_BLOCKING_CONTACT_BLOCKING_CAPABILITIES \
"org.freedesktop.Telepathy.Connection.Interface.ContactBlocking.ContactBlockingCapabilities"

#define TP_TOKEN_CONNECTION_INTERFACE_CONTACT_BLOCKING_BLOCKED \
"org.freedesktop.Telepathy.Connection.Interface.ContactBlocking/blocked"

#define TP_IFACE_CONNECTION_INTERFACE_CONTACT_CAPABILITIES \
"org.freedesktop.Telepathy.Connection.Interface.ContactCapabilities"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_CONTACT_CAPABILITIES \
  (tp_iface_quark_connection_interface_contact_capabilities ())

GQuark tp_iface_quark_connection_interface_contact_capabilities (void);


#define TP_TOKEN_CONNECTION_INTERFACE_CONTACT_CAPABILITIES_CAPABILITIES \
"org.freedesktop.Telepathy.Connection.Interface.ContactCapabilities/capabilities"

#define TP_IFACE_CONNECTION_INTERFACE_CONTACT_GROUPS \
"org.freedesktop.Telepathy.Connection.Interface.ContactGroups"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_CONTACT_GROUPS \
  (tp_iface_quark_connection_interface_contact_groups ())

GQuark tp_iface_quark_connection_interface_contact_groups (void);


#define TP_PROP_CONNECTION_INTERFACE_CONTACT_GROUPS_DISJOINT_GROUPS \
"org.freedesktop.Telepathy.Connection.Interface.ContactGroups.DisjointGroups"

#define TP_PROP_CONNECTION_INTERFACE_CONTACT_GROUPS_GROUP_STORAGE \
"org.freedesktop.Telepathy.Connection.Interface.ContactGroups.GroupStorage"

#define TP_PROP_CONNECTION_INTERFACE_CONTACT_GROUPS_GROUPS \
"org.freedesktop.Telepathy.Connection.Interface.ContactGroups.Groups"

#define TP_TOKEN_CONNECTION_INTERFACE_CONTACT_GROUPS_GROUPS \
"org.freedesktop.Telepathy.Connection.Interface.ContactGroups/groups"

#define TP_IFACE_CONNECTION_INTERFACE_CONTACT_INFO \
"org.freedesktop.Telepathy.Connection.Interface.ContactInfo"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_CONTACT_INFO \
  (tp_iface_quark_connection_interface_contact_info ())

GQuark tp_iface_quark_connection_interface_contact_info (void);


#define TP_PROP_CONNECTION_INTERFACE_CONTACT_INFO_CONTACT_INFO_FLAGS \
"org.freedesktop.Telepathy.Connection.Interface.ContactInfo.ContactInfoFlags"

#define TP_PROP_CONNECTION_INTERFACE_CONTACT_INFO_SUPPORTED_FIELDS \
"org.freedesktop.Telepathy.Connection.Interface.ContactInfo.SupportedFields"

#define TP_TOKEN_CONNECTION_INTERFACE_CONTACT_INFO_INFO \
"org.freedesktop.Telepathy.Connection.Interface.ContactInfo/info"

#define TP_IFACE_CONNECTION_INTERFACE_CONTACT_LIST \
"org.freedesktop.Telepathy.Connection.Interface.ContactList"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_CONTACT_LIST \
  (tp_iface_quark_connection_interface_contact_list ())

GQuark tp_iface_quark_connection_interface_contact_list (void);


#define TP_PROP_CONNECTION_INTERFACE_CONTACT_LIST_CONTACT_LIST_STATE \
"org.freedesktop.Telepathy.Connection.Interface.ContactList.ContactListState"

#define TP_PROP_CONNECTION_INTERFACE_CONTACT_LIST_CONTACT_LIST_PERSISTS \
"org.freedesktop.Telepathy.Connection.Interface.ContactList.ContactListPersists"

#define TP_PROP_CONNECTION_INTERFACE_CONTACT_LIST_CAN_CHANGE_CONTACT_LIST \
"org.freedesktop.Telepathy.Connection.Interface.ContactList.CanChangeContactList"

#define TP_PROP_CONNECTION_INTERFACE_CONTACT_LIST_REQUEST_USES_MESSAGE \
"org.freedesktop.Telepathy.Connection.Interface.ContactList.RequestUsesMessage"

#define TP_TOKEN_CONNECTION_INTERFACE_CONTACT_LIST_SUBSCRIBE \
"org.freedesktop.Telepathy.Connection.Interface.ContactList/subscribe"

#define TP_TOKEN_CONNECTION_INTERFACE_CONTACT_LIST_PUBLISH \
"org.freedesktop.Telepathy.Connection.Interface.ContactList/publish"

#define TP_TOKEN_CONNECTION_INTERFACE_CONTACT_LIST_PUBLISH_REQUEST \
"org.freedesktop.Telepathy.Connection.Interface.ContactList/publish-request"

#define TP_IFACE_CONNECTION_INTERFACE_SIMPLE_PRESENCE \
"org.freedesktop.Telepathy.Connection.Interface.SimplePresence"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_SIMPLE_PRESENCE \
  (tp_iface_quark_connection_interface_simple_presence ())

GQuark tp_iface_quark_connection_interface_simple_presence (void);


#define TP_PROP_CONNECTION_INTERFACE_SIMPLE_PRESENCE_STATUSES \
"org.freedesktop.Telepathy.Connection.Interface.SimplePresence.Statuses"

#define TP_PROP_CONNECTION_INTERFACE_SIMPLE_PRESENCE_MAXIMUM_STATUS_MESSAGE_LENGTH \
"org.freedesktop.Telepathy.Connection.Interface.SimplePresence.MaximumStatusMessageLength"

#define TP_TOKEN_CONNECTION_INTERFACE_SIMPLE_PRESENCE_PRESENCE \
"org.freedesktop.Telepathy.Connection.Interface.SimplePresence/presence"

#define TP_IFACE_CONNECTION_INTERFACE_PRESENCE \
"org.freedesktop.Telepathy.Connection.Interface.Presence"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_PRESENCE \
  (tp_iface_quark_connection_interface_presence ())

GQuark tp_iface_quark_connection_interface_presence (void);


#define TP_IFACE_CONNECTION_INTERFACE_CONTACTS \
"org.freedesktop.Telepathy.Connection.Interface.Contacts"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_CONTACTS \
  (tp_iface_quark_connection_interface_contacts ())

GQuark tp_iface_quark_connection_interface_contacts (void);


#define TP_PROP_CONNECTION_INTERFACE_CONTACTS_CONTACT_ATTRIBUTE_INTERFACES \
"org.freedesktop.Telepathy.Connection.Interface.Contacts.ContactAttributeInterfaces"

#define TP_IFACE_CONNECTION_INTERFACE_REQUESTS \
"org.freedesktop.Telepathy.Connection.Interface.Requests"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_REQUESTS \
  (tp_iface_quark_connection_interface_requests ())

GQuark tp_iface_quark_connection_interface_requests (void);


#define TP_PROP_CONNECTION_INTERFACE_REQUESTS_CHANNELS \
"org.freedesktop.Telepathy.Connection.Interface.Requests.Channels"

#define TP_PROP_CONNECTION_INTERFACE_REQUESTS_REQUESTABLE_CHANNEL_CLASSES \
"org.freedesktop.Telepathy.Connection.Interface.Requests.RequestableChannelClasses"

#define TP_IFACE_CONNECTION_INTERFACE_LOCATION \
"org.freedesktop.Telepathy.Connection.Interface.Location"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_LOCATION \
  (tp_iface_quark_connection_interface_location ())

GQuark tp_iface_quark_connection_interface_location (void);


#define TP_PROP_CONNECTION_INTERFACE_LOCATION_LOCATION_ACCESS_CONTROL_TYPES \
"org.freedesktop.Telepathy.Connection.Interface.Location.LocationAccessControlTypes"

#define TP_PROP_CONNECTION_INTERFACE_LOCATION_LOCATION_ACCESS_CONTROL \
"org.freedesktop.Telepathy.Connection.Interface.Location.LocationAccessControl"

#define TP_PROP_CONNECTION_INTERFACE_LOCATION_SUPPORTED_LOCATION_FEATURES \
"org.freedesktop.Telepathy.Connection.Interface.Location.SupportedLocationFeatures"

#define TP_TOKEN_CONNECTION_INTERFACE_LOCATION_LOCATION \
"org.freedesktop.Telepathy.Connection.Interface.Location/location"

#define TP_IFACE_CONNECTION_INTERFACE_SERVICE_POINT \
"org.freedesktop.Telepathy.Connection.Interface.ServicePoint"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_SERVICE_POINT \
  (tp_iface_quark_connection_interface_service_point ())

GQuark tp_iface_quark_connection_interface_service_point (void);


#define TP_PROP_CONNECTION_INTERFACE_SERVICE_POINT_KNOWN_SERVICE_POINTS \
"org.freedesktop.Telepathy.Connection.Interface.ServicePoint.KnownServicePoints"

#define TP_IFACE_CONNECTION_INTERFACE_MAIL_NOTIFICATION \
"org.freedesktop.Telepathy.Connection.Interface.MailNotification"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_MAIL_NOTIFICATION \
  (tp_iface_quark_connection_interface_mail_notification ())

GQuark tp_iface_quark_connection_interface_mail_notification (void);


#define TP_PROP_CONNECTION_INTERFACE_MAIL_NOTIFICATION_MAIL_NOTIFICATION_FLAGS \
"org.freedesktop.Telepathy.Connection.Interface.MailNotification.MailNotificationFlags"

#define TP_PROP_CONNECTION_INTERFACE_MAIL_NOTIFICATION_UNREAD_MAIL_COUNT \
"org.freedesktop.Telepathy.Connection.Interface.MailNotification.UnreadMailCount"

#define TP_PROP_CONNECTION_INTERFACE_MAIL_NOTIFICATION_UNREAD_MAILS \
"org.freedesktop.Telepathy.Connection.Interface.MailNotification.UnreadMails"

#define TP_PROP_CONNECTION_INTERFACE_MAIL_NOTIFICATION_MAIL_ADDRESS \
"org.freedesktop.Telepathy.Connection.Interface.MailNotification.MailAddress"

#define TP_IFACE_CONNECTION_INTERFACE_POWER_SAVING \
"org.freedesktop.Telepathy.Connection.Interface.PowerSaving"

#define TP_IFACE_QUARK_CONNECTION_INTERFACE_POWER_SAVING \
  (tp_iface_quark_connection_interface_power_saving ())

GQuark tp_iface_quark_connection_interface_power_saving (void);


#define TP_PROP_CONNECTION_INTERFACE_POWER_SAVING_POWER_SAVING_ACTIVE \
"org.freedesktop.Telepathy.Connection.Interface.PowerSaving.PowerSavingActive"

#define TP_IFACE_CHANNEL \
"org.freedesktop.Telepathy.Channel"

#define TP_IFACE_QUARK_CHANNEL \
  (tp_iface_quark_channel ())

GQuark tp_iface_quark_channel (void);


#define TP_PROP_CHANNEL_CHANNEL_TYPE \
"org.freedesktop.Telepathy.Channel.ChannelType"

#define TP_PROP_CHANNEL_INTERFACES \
"org.freedesktop.Telepathy.Channel.Interfaces"

#define TP_PROP_CHANNEL_TARGET_HANDLE \
"org.freedesktop.Telepathy.Channel.TargetHandle"

#define TP_PROP_CHANNEL_TARGET_ID \
"org.freedesktop.Telepathy.Channel.TargetID"

#define TP_PROP_CHANNEL_TARGET_HANDLE_TYPE \
"org.freedesktop.Telepathy.Channel.TargetHandleType"

#define TP_PROP_CHANNEL_REQUESTED \
"org.freedesktop.Telepathy.Channel.Requested"

#define TP_PROP_CHANNEL_INITIATOR_HANDLE \
"org.freedesktop.Telepathy.Channel.InitiatorHandle"

#define TP_PROP_CHANNEL_INITIATOR_ID \
"org.freedesktop.Telepathy.Channel.InitiatorID"

#define TP_IFACE_CHANNEL_TYPE_CONTACT_LIST \
"org.freedesktop.Telepathy.Channel.Type.ContactList"

#define TP_IFACE_QUARK_CHANNEL_TYPE_CONTACT_LIST \
  (tp_iface_quark_channel_type_contact_list ())

GQuark tp_iface_quark_channel_type_contact_list (void);


#define TP_IFACE_CHANNEL_TYPE_CONTACT_SEARCH \
"org.freedesktop.Telepathy.Channel.Type.ContactSearch"

#define TP_IFACE_QUARK_CHANNEL_TYPE_CONTACT_SEARCH \
  (tp_iface_quark_channel_type_contact_search ())

GQuark tp_iface_quark_channel_type_contact_search (void);


#define TP_PROP_CHANNEL_TYPE_CONTACT_SEARCH_SEARCH_STATE \
"org.freedesktop.Telepathy.Channel.Type.ContactSearch.SearchState"

#define TP_PROP_CHANNEL_TYPE_CONTACT_SEARCH_LIMIT \
"org.freedesktop.Telepathy.Channel.Type.ContactSearch.Limit"

#define TP_PROP_CHANNEL_TYPE_CONTACT_SEARCH_AVAILABLE_SEARCH_KEYS \
"org.freedesktop.Telepathy.Channel.Type.ContactSearch.AvailableSearchKeys"

#define TP_PROP_CHANNEL_TYPE_CONTACT_SEARCH_SERVER \
"org.freedesktop.Telepathy.Channel.Type.ContactSearch.Server"

#define TP_IFACE_CHANNEL_TYPE_FILE_TRANSFER \
"org.freedesktop.Telepathy.Channel.Type.FileTransfer"

#define TP_IFACE_QUARK_CHANNEL_TYPE_FILE_TRANSFER \
  (tp_iface_quark_channel_type_file_transfer ())

GQuark tp_iface_quark_channel_type_file_transfer (void);


#define TP_PROP_CHANNEL_TYPE_FILE_TRANSFER_STATE \
"org.freedesktop.Telepathy.Channel.Type.FileTransfer.State"

#define TP_PROP_CHANNEL_TYPE_FILE_TRANSFER_CONTENT_TYPE \
"org.freedesktop.Telepathy.Channel.Type.FileTransfer.ContentType"

#define TP_PROP_CHANNEL_TYPE_FILE_TRANSFER_FILENAME \
"org.freedesktop.Telepathy.Channel.Type.FileTransfer.Filename"

#define TP_PROP_CHANNEL_TYPE_FILE_TRANSFER_SIZE \
"org.freedesktop.Telepathy.Channel.Type.FileTransfer.Size"

#define TP_PROP_CHANNEL_TYPE_FILE_TRANSFER_CONTENT_HASH_TYPE \
"org.freedesktop.Telepathy.Channel.Type.FileTransfer.ContentHashType"

#define TP_PROP_CHANNEL_TYPE_FILE_TRANSFER_CONTENT_HASH \
"org.freedesktop.Telepathy.Channel.Type.FileTransfer.ContentHash"

#define TP_PROP_CHANNEL_TYPE_FILE_TRANSFER_DESCRIPTION \
"org.freedesktop.Telepathy.Channel.Type.FileTransfer.Description"

#define TP_PROP_CHANNEL_TYPE_FILE_TRANSFER_DATE \
"org.freedesktop.Telepathy.Channel.Type.FileTransfer.Date"

#define TP_PROP_CHANNEL_TYPE_FILE_TRANSFER_AVAILABLE_SOCKET_TYPES \
"org.freedesktop.Telepathy.Channel.Type.FileTransfer.AvailableSocketTypes"

#define TP_PROP_CHANNEL_TYPE_FILE_TRANSFER_TRANSFERRED_BYTES \
"org.freedesktop.Telepathy.Channel.Type.FileTransfer.TransferredBytes"

#define TP_PROP_CHANNEL_TYPE_FILE_TRANSFER_INITIAL_OFFSET \
"org.freedesktop.Telepathy.Channel.Type.FileTransfer.InitialOffset"

#define TP_PROP_CHANNEL_TYPE_FILE_TRANSFER_URI \
"org.freedesktop.Telepathy.Channel.Type.FileTransfer.URI"

#define TP_IFACE_CHANNEL_TYPE_STREAMED_MEDIA \
"org.freedesktop.Telepathy.Channel.Type.StreamedMedia"

#define TP_IFACE_QUARK_CHANNEL_TYPE_STREAMED_MEDIA \
  (tp_iface_quark_channel_type_streamed_media ())

GQuark tp_iface_quark_channel_type_streamed_media (void);


#define TP_PROP_CHANNEL_TYPE_STREAMED_MEDIA_INITIAL_AUDIO \
"org.freedesktop.Telepathy.Channel.Type.StreamedMedia.InitialAudio"

#define TP_PROP_CHANNEL_TYPE_STREAMED_MEDIA_INITIAL_VIDEO \
"org.freedesktop.Telepathy.Channel.Type.StreamedMedia.InitialVideo"

#define TP_PROP_CHANNEL_TYPE_STREAMED_MEDIA_IMMUTABLE_STREAMS \
"org.freedesktop.Telepathy.Channel.Type.StreamedMedia.ImmutableStreams"

#define TP_IFACE_CHANNEL_TYPE_ROOM_LIST \
"org.freedesktop.Telepathy.Channel.Type.RoomList"

#define TP_IFACE_QUARK_CHANNEL_TYPE_ROOM_LIST \
  (tp_iface_quark_channel_type_room_list ())

GQuark tp_iface_quark_channel_type_room_list (void);


#define TP_PROP_CHANNEL_TYPE_ROOM_LIST_SERVER \
"org.freedesktop.Telepathy.Channel.Type.RoomList.Server"

#define TP_IFACE_CHANNEL_TYPE_TEXT \
"org.freedesktop.Telepathy.Channel.Type.Text"

#define TP_IFACE_QUARK_CHANNEL_TYPE_TEXT \
  (tp_iface_quark_channel_type_text ())

GQuark tp_iface_quark_channel_type_text (void);


#define TP_IFACE_CHANNEL_TYPE_TUBES \
"org.freedesktop.Telepathy.Channel.Type.Tubes"

#define TP_IFACE_QUARK_CHANNEL_TYPE_TUBES \
  (tp_iface_quark_channel_type_tubes ())

GQuark tp_iface_quark_channel_type_tubes (void);


#define TP_IFACE_CHANNEL_TYPE_STREAM_TUBE \
"org.freedesktop.Telepathy.Channel.Type.StreamTube"

#define TP_IFACE_QUARK_CHANNEL_TYPE_STREAM_TUBE \
  (tp_iface_quark_channel_type_stream_tube ())

GQuark tp_iface_quark_channel_type_stream_tube (void);


#define TP_PROP_CHANNEL_TYPE_STREAM_TUBE_SERVICE \
"org.freedesktop.Telepathy.Channel.Type.StreamTube.Service"

#define TP_PROP_CHANNEL_TYPE_STREAM_TUBE_SUPPORTED_SOCKET_TYPES \
"org.freedesktop.Telepathy.Channel.Type.StreamTube.SupportedSocketTypes"

#define TP_IFACE_CHANNEL_TYPE_DBUS_TUBE \
"org.freedesktop.Telepathy.Channel.Type.DBusTube"

#define TP_IFACE_QUARK_CHANNEL_TYPE_DBUS_TUBE \
  (tp_iface_quark_channel_type_dbus_tube ())

GQuark tp_iface_quark_channel_type_dbus_tube (void);


#define TP_PROP_CHANNEL_TYPE_DBUS_TUBE_SERVICE_NAME \
"org.freedesktop.Telepathy.Channel.Type.DBusTube.ServiceName"

#define TP_PROP_CHANNEL_TYPE_DBUS_TUBE_DBUS_NAMES \
"org.freedesktop.Telepathy.Channel.Type.DBusTube.DBusNames"

#define TP_PROP_CHANNEL_TYPE_DBUS_TUBE_SUPPORTED_ACCESS_CONTROLS \
"org.freedesktop.Telepathy.Channel.Type.DBusTube.SupportedAccessControls"

#define TP_IFACE_CHANNEL_TYPE_SERVER_AUTHENTICATION \
"org.freedesktop.Telepathy.Channel.Type.ServerAuthentication"

#define TP_IFACE_QUARK_CHANNEL_TYPE_SERVER_AUTHENTICATION \
  (tp_iface_quark_channel_type_server_authentication ())

GQuark tp_iface_quark_channel_type_server_authentication (void);


#define TP_PROP_CHANNEL_TYPE_SERVER_AUTHENTICATION_AUTHENTICATION_METHOD \
"org.freedesktop.Telepathy.Channel.Type.ServerAuthentication.AuthenticationMethod"

#define TP_IFACE_CHANNEL_TYPE_SERVER_TLS_CONNECTION \
"org.freedesktop.Telepathy.Channel.Type.ServerTLSConnection"

#define TP_IFACE_QUARK_CHANNEL_TYPE_SERVER_TLS_CONNECTION \
  (tp_iface_quark_channel_type_server_tls_connection ())

GQuark tp_iface_quark_channel_type_server_tls_connection (void);


#define TP_PROP_CHANNEL_TYPE_SERVER_TLS_CONNECTION_SERVER_CERTIFICATE \
"org.freedesktop.Telepathy.Channel.Type.ServerTLSConnection.ServerCertificate"

#define TP_PROP_CHANNEL_TYPE_SERVER_TLS_CONNECTION_HOSTNAME \
"org.freedesktop.Telepathy.Channel.Type.ServerTLSConnection.Hostname"

#define TP_PROP_CHANNEL_TYPE_SERVER_TLS_CONNECTION_REFERENCE_IDENTITIES \
"org.freedesktop.Telepathy.Channel.Type.ServerTLSConnection.ReferenceIdentities"

#define TP_IFACE_CHANNEL_INTERFACE_ANONYMITY \
"org.freedesktop.Telepathy.Channel.Interface.Anonymity"

#define TP_IFACE_QUARK_CHANNEL_INTERFACE_ANONYMITY \
  (tp_iface_quark_channel_interface_anonymity ())

GQuark tp_iface_quark_channel_interface_anonymity (void);


#define TP_PROP_CHANNEL_INTERFACE_ANONYMITY_ANONYMITY_MODES \
"org.freedesktop.Telepathy.Channel.Interface.Anonymity.AnonymityModes"

#define TP_PROP_CHANNEL_INTERFACE_ANONYMITY_ANONYMITY_MANDATORY \
"org.freedesktop.Telepathy.Channel.Interface.Anonymity.AnonymityMandatory"

#define TP_PROP_CHANNEL_INTERFACE_ANONYMITY_ANONYMOUS_ID \
"org.freedesktop.Telepathy.Channel.Interface.Anonymity.AnonymousID"

#define TP_IFACE_CHANNEL_INTERFACE_CALL_STATE \
"org.freedesktop.Telepathy.Channel.Interface.CallState"

#define TP_IFACE_QUARK_CHANNEL_INTERFACE_CALL_STATE \
  (tp_iface_quark_channel_interface_call_state ())

GQuark tp_iface_quark_channel_interface_call_state (void);


#define TP_IFACE_CHANNEL_INTERFACE_CHAT_STATE \
"org.freedesktop.Telepathy.Channel.Interface.ChatState"

#define TP_IFACE_QUARK_CHANNEL_INTERFACE_CHAT_STATE \
  (tp_iface_quark_channel_interface_chat_state ())

GQuark tp_iface_quark_channel_interface_chat_state (void);


#define TP_PROP_CHANNEL_INTERFACE_CHAT_STATE_CHAT_STATES \
"org.freedesktop.Telepathy.Channel.Interface.ChatState.ChatStates"

#define TP_IFACE_CHANNEL_INTERFACE_CONFERENCE \
"org.freedesktop.Telepathy.Channel.Interface.Conference"

#define TP_IFACE_QUARK_CHANNEL_INTERFACE_CONFERENCE \
  (tp_iface_quark_channel_interface_conference ())

GQuark tp_iface_quark_channel_interface_conference (void);


#define TP_PROP_CHANNEL_INTERFACE_CONFERENCE_CHANNELS \
"org.freedesktop.Telepathy.Channel.Interface.Conference.Channels"

#define TP_PROP_CHANNEL_INTERFACE_CONFERENCE_INITIAL_CHANNELS \
"org.freedesktop.Telepathy.Channel.Interface.Conference.InitialChannels"

#define TP_PROP_CHANNEL_INTERFACE_CONFERENCE_INITIAL_INVITEE_HANDLES \
"org.freedesktop.Telepathy.Channel.Interface.Conference.InitialInviteeHandles"

#define TP_PROP_CHANNEL_INTERFACE_CONFERENCE_INITIAL_INVITEE_IDS \
"org.freedesktop.Telepathy.Channel.Interface.Conference.InitialInviteeIDs"

#define TP_PROP_CHANNEL_INTERFACE_CONFERENCE_INVITATION_MESSAGE \
"org.freedesktop.Telepathy.Channel.Interface.Conference.InvitationMessage"

#define TP_PROP_CHANNEL_INTERFACE_CONFERENCE_ORIGINAL_CHANNELS \
"org.freedesktop.Telepathy.Channel.Interface.Conference.OriginalChannels"

#define TP_IFACE_CHANNEL_INTERFACE_DESTROYABLE \
"org.freedesktop.Telepathy.Channel.Interface.Destroyable"

#define TP_IFACE_QUARK_CHANNEL_INTERFACE_DESTROYABLE \
  (tp_iface_quark_channel_interface_destroyable ())

GQuark tp_iface_quark_channel_interface_destroyable (void);


#define TP_IFACE_CHANNEL_INTERFACE_DTMF \
"org.freedesktop.Telepathy.Channel.Interface.DTMF"

#define TP_IFACE_QUARK_CHANNEL_INTERFACE_DTMF \
  (tp_iface_quark_channel_interface_dtmf ())

GQuark tp_iface_quark_channel_interface_dtmf (void);


#define TP_PROP_CHANNEL_INTERFACE_DTMF_CURRENTLY_SENDING_TONES \
"org.freedesktop.Telepathy.Channel.Interface.DTMF.CurrentlySendingTones"

#define TP_PROP_CHANNEL_INTERFACE_DTMF_INITIAL_TONES \
"org.freedesktop.Telepathy.Channel.Interface.DTMF.InitialTones"

#define TP_PROP_CHANNEL_INTERFACE_DTMF_DEFERRED_TONES \
"org.freedesktop.Telepathy.Channel.Interface.DTMF.DeferredTones"

#define TP_IFACE_CHANNEL_INTERFACE_GROUP \
"org.freedesktop.Telepathy.Channel.Interface.Group"

#define TP_IFACE_QUARK_CHANNEL_INTERFACE_GROUP \
  (tp_iface_quark_channel_interface_group ())

GQuark tp_iface_quark_channel_interface_group (void);


#define TP_PROP_CHANNEL_INTERFACE_GROUP_GROUP_FLAGS \
"org.freedesktop.Telepathy.Channel.Interface.Group.GroupFlags"

#define TP_PROP_CHANNEL_INTERFACE_GROUP_HANDLE_OWNERS \
"org.freedesktop.Telepathy.Channel.Interface.Group.HandleOwners"

#define TP_PROP_CHANNEL_INTERFACE_GROUP_LOCAL_PENDING_MEMBERS \
"org.freedesktop.Telepathy.Channel.Interface.Group.LocalPendingMembers"

#define TP_PROP_CHANNEL_INTERFACE_GROUP_MEMBERS \
"org.freedesktop.Telepathy.Channel.Interface.Group.Members"

#define TP_PROP_CHANNEL_INTERFACE_GROUP_REMOTE_PENDING_MEMBERS \
"org.freedesktop.Telepathy.Channel.Interface.Group.RemotePendingMembers"

#define TP_PROP_CHANNEL_INTERFACE_GROUP_SELF_HANDLE \
"org.freedesktop.Telepathy.Channel.Interface.Group.SelfHandle"

#define TP_IFACE_CHANNEL_INTERFACE_HOLD \
"org.freedesktop.Telepathy.Channel.Interface.Hold"

#define TP_IFACE_QUARK_CHANNEL_INTERFACE_HOLD \
  (tp_iface_quark_channel_interface_hold ())

GQuark tp_iface_quark_channel_interface_hold (void);


#define TP_IFACE_CHANNEL_INTERFACE_MEDIA_SIGNALLING \
"org.freedesktop.Telepathy.Channel.Interface.MediaSignalling"

#define TP_IFACE_QUARK_CHANNEL_INTERFACE_MEDIA_SIGNALLING \
  (tp_iface_quark_channel_interface_media_signalling ())

GQuark tp_iface_quark_channel_interface_media_signalling (void);


#define TP_TOKEN_CHANNEL_INTERFACE_MEDIA_SIGNALLING_GTALK_P2P \
"org.freedesktop.Telepathy.Channel.Interface.MediaSignalling/gtalk-p2p"

#define TP_TOKEN_CHANNEL_INTERFACE_MEDIA_SIGNALLING_ICE_UDP \
"org.freedesktop.Telepathy.Channel.Interface.MediaSignalling/ice-udp"

#define TP_TOKEN_CHANNEL_INTERFACE_MEDIA_SIGNALLING_WLM_8_5 \
"org.freedesktop.Telepathy.Channel.Interface.MediaSignalling/wlm-8.5"

#define TP_TOKEN_CHANNEL_INTERFACE_MEDIA_SIGNALLING_WLM_2009 \
"org.freedesktop.Telepathy.Channel.Interface.MediaSignalling/wlm-2009"

#define TP_IFACE_CHANNEL_INTERFACE_MESSAGES \
"org.freedesktop.Telepathy.Channel.Interface.Messages"

#define TP_IFACE_QUARK_CHANNEL_INTERFACE_MESSAGES \
  (tp_iface_quark_channel_interface_messages ())

GQuark tp_iface_quark_channel_interface_messages (void);


#define TP_PROP_CHANNEL_INTERFACE_MESSAGES_SUPPORTED_CONTENT_TYPES \
"org.freedesktop.Telepathy.Channel.Interface.Messages.SupportedContentTypes"

#define TP_PROP_CHANNEL_INTERFACE_MESSAGES_MESSAGE_TYPES \
"org.freedesktop.Telepathy.Channel.Interface.Messages.MessageTypes"

#define TP_PROP_CHANNEL_INTERFACE_MESSAGES_MESSAGE_PART_SUPPORT_FLAGS \
"org.freedesktop.Telepathy.Channel.Interface.Messages.MessagePartSupportFlags"

#define TP_PROP_CHANNEL_INTERFACE_MESSAGES_PENDING_MESSAGES \
"org.freedesktop.Telepathy.Channel.Interface.Messages.PendingMessages"

#define TP_PROP_CHANNEL_INTERFACE_MESSAGES_DELIVERY_REPORTING_SUPPORT \
"org.freedesktop.Telepathy.Channel.Interface.Messages.DeliveryReportingSupport"

#define TP_IFACE_CHANNEL_INTERFACE_PASSWORD \
"org.freedesktop.Telepathy.Channel.Interface.Password"

#define TP_IFACE_QUARK_CHANNEL_INTERFACE_PASSWORD \
  (tp_iface_quark_channel_interface_password ())

GQuark tp_iface_quark_channel_interface_password (void);


#define TP_IFACE_CHANNEL_INTERFACE_SASL_AUTHENTICATION \
"org.freedesktop.Telepathy.Channel.Interface.SASLAuthentication"

#define TP_IFACE_QUARK_CHANNEL_INTERFACE_SASL_AUTHENTICATION \
  (tp_iface_quark_channel_interface_sasl_authentication ())

GQuark tp_iface_quark_channel_interface_sasl_authentication (void);


#define TP_PROP_CHANNEL_INTERFACE_SASL_AUTHENTICATION_AVAILABLE_MECHANISMS \
"org.freedesktop.Telepathy.Channel.Interface.SASLAuthentication.AvailableMechanisms"

#define TP_PROP_CHANNEL_INTERFACE_SASL_AUTHENTICATION_HAS_INITIAL_DATA \
"org.freedesktop.Telepathy.Channel.Interface.SASLAuthentication.HasInitialData"

#define TP_PROP_CHANNEL_INTERFACE_SASL_AUTHENTICATION_CAN_TRY_AGAIN \
"org.freedesktop.Telepathy.Channel.Interface.SASLAuthentication.CanTryAgain"

#define TP_PROP_CHANNEL_INTERFACE_SASL_AUTHENTICATION_SASL_STATUS \
"org.freedesktop.Telepathy.Channel.Interface.SASLAuthentication.SASLStatus"

#define TP_PROP_CHANNEL_INTERFACE_SASL_AUTHENTICATION_SASL_ERROR \
"org.freedesktop.Telepathy.Channel.Interface.SASLAuthentication.SASLError"

#define TP_PROP_CHANNEL_INTERFACE_SASL_AUTHENTICATION_SASL_ERROR_DETAILS \
"org.freedesktop.Telepathy.Channel.Interface.SASLAuthentication.SASLErrorDetails"

#define TP_PROP_CHANNEL_INTERFACE_SASL_AUTHENTICATION_AUTHORIZATION_IDENTITY \
"org.freedesktop.Telepathy.Channel.Interface.SASLAuthentication.AuthorizationIdentity"

#define TP_PROP_CHANNEL_INTERFACE_SASL_AUTHENTICATION_DEFAULT_USERNAME \
"org.freedesktop.Telepathy.Channel.Interface.SASLAuthentication.DefaultUsername"

#define TP_PROP_CHANNEL_INTERFACE_SASL_AUTHENTICATION_DEFAULT_REALM \
"org.freedesktop.Telepathy.Channel.Interface.SASLAuthentication.DefaultRealm"

#define TP_PROP_CHANNEL_INTERFACE_SASL_AUTHENTICATION_MAY_SAVE_RESPONSE \
"org.freedesktop.Telepathy.Channel.Interface.SASLAuthentication.MaySaveResponse"

#define TP_IFACE_CHANNEL_INTERFACE_SECURABLE \
"org.freedesktop.Telepathy.Channel.Interface.Securable"

#define TP_IFACE_QUARK_CHANNEL_INTERFACE_SECURABLE \
  (tp_iface_quark_channel_interface_securable ())

GQuark tp_iface_quark_channel_interface_securable (void);


#define TP_PROP_CHANNEL_INTERFACE_SECURABLE_ENCRYPTED \
"org.freedesktop.Telepathy.Channel.Interface.Securable.Encrypted"

#define TP_PROP_CHANNEL_INTERFACE_SECURABLE_VERIFIED \
"org.freedesktop.Telepathy.Channel.Interface.Securable.Verified"

#define TP_IFACE_CHANNEL_INTERFACE_SERVICE_POINT \
"org.freedesktop.Telepathy.Channel.Interface.ServicePoint"

#define TP_IFACE_QUARK_CHANNEL_INTERFACE_SERVICE_POINT \
  (tp_iface_quark_channel_interface_service_point ())

GQuark tp_iface_quark_channel_interface_service_point (void);


#define TP_PROP_CHANNEL_INTERFACE_SERVICE_POINT_INITIAL_SERVICE_POINT \
"org.freedesktop.Telepathy.Channel.Interface.ServicePoint.InitialServicePoint"

#define TP_PROP_CHANNEL_INTERFACE_SERVICE_POINT_CURRENT_SERVICE_POINT \
"org.freedesktop.Telepathy.Channel.Interface.ServicePoint.CurrentServicePoint"

#define TP_IFACE_CHANNEL_INTERFACE_SMS \
"org.freedesktop.Telepathy.Channel.Interface.SMS"

#define TP_IFACE_QUARK_CHANNEL_INTERFACE_SMS \
  (tp_iface_quark_channel_interface_sms ())

GQuark tp_iface_quark_channel_interface_sms (void);


#define TP_PROP_CHANNEL_INTERFACE_SMS_FLASH \
"org.freedesktop.Telepathy.Channel.Interface.SMS.Flash"

#define TP_PROP_CHANNEL_INTERFACE_SMS_SMS_CHANNEL \
"org.freedesktop.Telepathy.Channel.Interface.SMS.SMSChannel"

#define TP_IFACE_CHANNEL_INTERFACE_TUBE \
"org.freedesktop.Telepathy.Channel.Interface.Tube"

#define TP_IFACE_QUARK_CHANNEL_INTERFACE_TUBE \
  (tp_iface_quark_channel_interface_tube ())

GQuark tp_iface_quark_channel_interface_tube (void);


#define TP_PROP_CHANNEL_INTERFACE_TUBE_PARAMETERS \
"org.freedesktop.Telepathy.Channel.Interface.Tube.Parameters"

#define TP_PROP_CHANNEL_INTERFACE_TUBE_STATE \
"org.freedesktop.Telepathy.Channel.Interface.Tube.State"

#define TP_IFACE_MEDIA_SESSION_HANDLER \
"org.freedesktop.Telepathy.Media.SessionHandler"

#define TP_IFACE_QUARK_MEDIA_SESSION_HANDLER \
  (tp_iface_quark_media_session_handler ())

GQuark tp_iface_quark_media_session_handler (void);


#define TP_IFACE_MEDIA_STREAM_HANDLER \
"org.freedesktop.Telepathy.Media.StreamHandler"

#define TP_IFACE_QUARK_MEDIA_STREAM_HANDLER \
  (tp_iface_quark_media_stream_handler ())

GQuark tp_iface_quark_media_stream_handler (void);


#define TP_PROP_MEDIA_STREAM_HANDLER_STUN_SERVERS \
"org.freedesktop.Telepathy.Media.StreamHandler.STUNServers"

#define TP_PROP_MEDIA_STREAM_HANDLER_CREATED_LOCALLY \
"org.freedesktop.Telepathy.Media.StreamHandler.CreatedLocally"

#define TP_PROP_MEDIA_STREAM_HANDLER_NAT_TRAVERSAL \
"org.freedesktop.Telepathy.Media.StreamHandler.NATTraversal"

#define TP_PROP_MEDIA_STREAM_HANDLER_RELAY_INFO \
"org.freedesktop.Telepathy.Media.StreamHandler.RelayInfo"

#define TP_IFACE_DBUS_PEER \
"org.freedesktop.DBus.Peer"

#define TP_IFACE_QUARK_DBUS_PEER \
  (tp_iface_quark_dbus_peer ())

GQuark tp_iface_quark_dbus_peer (void);


#define TP_IFACE_DBUS_INTROSPECTABLE \
"org.freedesktop.DBus.Introspectable"

#define TP_IFACE_QUARK_DBUS_INTROSPECTABLE \
  (tp_iface_quark_dbus_introspectable ())

GQuark tp_iface_quark_dbus_introspectable (void);


#define TP_IFACE_DBUS_PROPERTIES \
"org.freedesktop.DBus.Properties"

#define TP_IFACE_QUARK_DBUS_PROPERTIES \
  (tp_iface_quark_dbus_properties ())

GQuark tp_iface_quark_dbus_properties (void);


#define TP_IFACE_PROPERTIES_INTERFACE \
"org.freedesktop.Telepathy.Properties"

#define TP_IFACE_QUARK_PROPERTIES_INTERFACE \
  (tp_iface_quark_properties_interface ())

GQuark tp_iface_quark_properties_interface (void);


#define TP_IFACE_DBUS_DAEMON \
"org.freedesktop.DBus"

#define TP_IFACE_QUARK_DBUS_DAEMON \
  (tp_iface_quark_dbus_daemon ())

GQuark tp_iface_quark_dbus_daemon (void);


#define TP_IFACE_ACCOUNT_MANAGER \
"org.freedesktop.Telepathy.AccountManager"

#define TP_IFACE_QUARK_ACCOUNT_MANAGER \
  (tp_iface_quark_account_manager ())

GQuark tp_iface_quark_account_manager (void);


#define TP_PROP_ACCOUNT_MANAGER_INTERFACES \
"org.freedesktop.Telepathy.AccountManager.Interfaces"

#define TP_PROP_ACCOUNT_MANAGER_VALID_ACCOUNTS \
"org.freedesktop.Telepathy.AccountManager.ValidAccounts"

#define TP_PROP_ACCOUNT_MANAGER_INVALID_ACCOUNTS \
"org.freedesktop.Telepathy.AccountManager.InvalidAccounts"

#define TP_PROP_ACCOUNT_MANAGER_SUPPORTED_ACCOUNT_PROPERTIES \
"org.freedesktop.Telepathy.AccountManager.SupportedAccountProperties"

#define TP_IFACE_ACCOUNT \
"org.freedesktop.Telepathy.Account"

#define TP_IFACE_QUARK_ACCOUNT \
  (tp_iface_quark_account ())

GQuark tp_iface_quark_account (void);


#define TP_PROP_ACCOUNT_INTERFACES \
"org.freedesktop.Telepathy.Account.Interfaces"

#define TP_PROP_ACCOUNT_DISPLAY_NAME \
"org.freedesktop.Telepathy.Account.DisplayName"

#define TP_PROP_ACCOUNT_ICON \
"org.freedesktop.Telepathy.Account.Icon"

#define TP_PROP_ACCOUNT_VALID \
"org.freedesktop.Telepathy.Account.Valid"

#define TP_PROP_ACCOUNT_ENABLED \
"org.freedesktop.Telepathy.Account.Enabled"

#define TP_PROP_ACCOUNT_NICKNAME \
"org.freedesktop.Telepathy.Account.Nickname"

#define TP_PROP_ACCOUNT_SERVICE \
"org.freedesktop.Telepathy.Account.Service"

#define TP_PROP_ACCOUNT_PARAMETERS \
"org.freedesktop.Telepathy.Account.Parameters"

#define TP_PROP_ACCOUNT_AUTOMATIC_PRESENCE \
"org.freedesktop.Telepathy.Account.AutomaticPresence"

#define TP_PROP_ACCOUNT_CONNECT_AUTOMATICALLY \
"org.freedesktop.Telepathy.Account.ConnectAutomatically"

#define TP_PROP_ACCOUNT_CONNECTION \
"org.freedesktop.Telepathy.Account.Connection"

#define TP_PROP_ACCOUNT_CONNECTION_STATUS \
"org.freedesktop.Telepathy.Account.ConnectionStatus"

#define TP_PROP_ACCOUNT_CONNECTION_STATUS_REASON \
"org.freedesktop.Telepathy.Account.ConnectionStatusReason"

#define TP_PROP_ACCOUNT_CONNECTION_ERROR \
"org.freedesktop.Telepathy.Account.ConnectionError"

#define TP_PROP_ACCOUNT_CONNECTION_ERROR_DETAILS \
"org.freedesktop.Telepathy.Account.ConnectionErrorDetails"

#define TP_PROP_ACCOUNT_CURRENT_PRESENCE \
"org.freedesktop.Telepathy.Account.CurrentPresence"

#define TP_PROP_ACCOUNT_REQUESTED_PRESENCE \
"org.freedesktop.Telepathy.Account.RequestedPresence"

#define TP_PROP_ACCOUNT_CHANGING_PRESENCE \
"org.freedesktop.Telepathy.Account.ChangingPresence"

#define TP_PROP_ACCOUNT_NORMALIZED_NAME \
"org.freedesktop.Telepathy.Account.NormalizedName"

#define TP_PROP_ACCOUNT_HAS_BEEN_ONLINE \
"org.freedesktop.Telepathy.Account.HasBeenOnline"

#define TP_IFACE_ACCOUNT_INTERFACE_AVATAR \
"org.freedesktop.Telepathy.Account.Interface.Avatar"

#define TP_IFACE_QUARK_ACCOUNT_INTERFACE_AVATAR \
  (tp_iface_quark_account_interface_avatar ())

GQuark tp_iface_quark_account_interface_avatar (void);


#define TP_PROP_ACCOUNT_INTERFACE_AVATAR_AVATAR \
"org.freedesktop.Telepathy.Account.Interface.Avatar.Avatar"

#define TP_IFACE_ACCOUNT_INTERFACE_ADDRESSING \
"org.freedesktop.Telepathy.Account.Interface.Addressing"

#define TP_IFACE_QUARK_ACCOUNT_INTERFACE_ADDRESSING \
  (tp_iface_quark_account_interface_addressing ())

GQuark tp_iface_quark_account_interface_addressing (void);


#define TP_PROP_ACCOUNT_INTERFACE_ADDRESSING_URI_SCHEMES \
"org.freedesktop.Telepathy.Account.Interface.Addressing.URISchemes"

#define TP_IFACE_ACCOUNT_INTERFACE_STORAGE \
"org.freedesktop.Telepathy.Account.Interface.Storage"

#define TP_IFACE_QUARK_ACCOUNT_INTERFACE_STORAGE \
  (tp_iface_quark_account_interface_storage ())

GQuark tp_iface_quark_account_interface_storage (void);


#define TP_PROP_ACCOUNT_INTERFACE_STORAGE_STORAGE_PROVIDER \
"org.freedesktop.Telepathy.Account.Interface.Storage.StorageProvider"

#define TP_PROP_ACCOUNT_INTERFACE_STORAGE_STORAGE_IDENTIFIER \
"org.freedesktop.Telepathy.Account.Interface.Storage.StorageIdentifier"

#define TP_PROP_ACCOUNT_INTERFACE_STORAGE_STORAGE_SPECIFIC_INFORMATION \
"org.freedesktop.Telepathy.Account.Interface.Storage.StorageSpecificInformation"

#define TP_PROP_ACCOUNT_INTERFACE_STORAGE_STORAGE_RESTRICTIONS \
"org.freedesktop.Telepathy.Account.Interface.Storage.StorageRestrictions"

#define TP_IFACE_CHANNEL_DISPATCHER \
"org.freedesktop.Telepathy.ChannelDispatcher"

#define TP_IFACE_QUARK_CHANNEL_DISPATCHER \
  (tp_iface_quark_channel_dispatcher ())

GQuark tp_iface_quark_channel_dispatcher (void);


#define TP_PROP_CHANNEL_DISPATCHER_INTERFACES \
"org.freedesktop.Telepathy.ChannelDispatcher.Interfaces"

#define TP_PROP_CHANNEL_DISPATCHER_SUPPORTS_REQUEST_HINTS \
"org.freedesktop.Telepathy.ChannelDispatcher.SupportsRequestHints"

#define TP_IFACE_CHANNEL_DISPATCHER_INTERFACE_OPERATION_LIST \
"org.freedesktop.Telepathy.ChannelDispatcher.Interface.OperationList"

#define TP_IFACE_QUARK_CHANNEL_DISPATCHER_INTERFACE_OPERATION_LIST \
  (tp_iface_quark_channel_dispatcher_interface_operation_list ())

GQuark tp_iface_quark_channel_dispatcher_interface_operation_list (void);


#define TP_PROP_CHANNEL_DISPATCHER_INTERFACE_OPERATION_LIST_DISPATCH_OPERATIONS \
"org.freedesktop.Telepathy.ChannelDispatcher.Interface.OperationList.DispatchOperations"

#define TP_IFACE_CHANNEL_DISPATCH_OPERATION \
"org.freedesktop.Telepathy.ChannelDispatchOperation"

#define TP_IFACE_QUARK_CHANNEL_DISPATCH_OPERATION \
  (tp_iface_quark_channel_dispatch_operation ())

GQuark tp_iface_quark_channel_dispatch_operation (void);


#define TP_PROP_CHANNEL_DISPATCH_OPERATION_INTERFACES \
"org.freedesktop.Telepathy.ChannelDispatchOperation.Interfaces"

#define TP_PROP_CHANNEL_DISPATCH_OPERATION_CONNECTION \
"org.freedesktop.Telepathy.ChannelDispatchOperation.Connection"

#define TP_PROP_CHANNEL_DISPATCH_OPERATION_ACCOUNT \
"org.freedesktop.Telepathy.ChannelDispatchOperation.Account"

#define TP_PROP_CHANNEL_DISPATCH_OPERATION_CHANNELS \
"org.freedesktop.Telepathy.ChannelDispatchOperation.Channels"

#define TP_PROP_CHANNEL_DISPATCH_OPERATION_POSSIBLE_HANDLERS \
"org.freedesktop.Telepathy.ChannelDispatchOperation.PossibleHandlers"

#define TP_IFACE_CHANNEL_REQUEST \
"org.freedesktop.Telepathy.ChannelRequest"

#define TP_IFACE_QUARK_CHANNEL_REQUEST \
  (tp_iface_quark_channel_request ())

GQuark tp_iface_quark_channel_request (void);


#define TP_PROP_CHANNEL_REQUEST_ACCOUNT \
"org.freedesktop.Telepathy.ChannelRequest.Account"

#define TP_PROP_CHANNEL_REQUEST_USER_ACTION_TIME \
"org.freedesktop.Telepathy.ChannelRequest.UserActionTime"

#define TP_PROP_CHANNEL_REQUEST_PREFERRED_HANDLER \
"org.freedesktop.Telepathy.ChannelRequest.PreferredHandler"

#define TP_PROP_CHANNEL_REQUEST_REQUESTS \
"org.freedesktop.Telepathy.ChannelRequest.Requests"

#define TP_PROP_CHANNEL_REQUEST_INTERFACES \
"org.freedesktop.Telepathy.ChannelRequest.Interfaces"

#define TP_PROP_CHANNEL_REQUEST_HINTS \
"org.freedesktop.Telepathy.ChannelRequest.Hints"

#define TP_IFACE_CLIENT \
"org.freedesktop.Telepathy.Client"

#define TP_IFACE_QUARK_CLIENT \
  (tp_iface_quark_client ())

GQuark tp_iface_quark_client (void);


#define TP_PROP_CLIENT_INTERFACES \
"org.freedesktop.Telepathy.Client.Interfaces"

#define TP_IFACE_CLIENT_OBSERVER \
"org.freedesktop.Telepathy.Client.Observer"

#define TP_IFACE_QUARK_CLIENT_OBSERVER \
  (tp_iface_quark_client_observer ())

GQuark tp_iface_quark_client_observer (void);


#define TP_PROP_CLIENT_OBSERVER_OBSERVER_CHANNEL_FILTER \
"org.freedesktop.Telepathy.Client.Observer.ObserverChannelFilter"

#define TP_PROP_CLIENT_OBSERVER_RECOVER \
"org.freedesktop.Telepathy.Client.Observer.Recover"

#define TP_PROP_CLIENT_OBSERVER_DELAY_APPROVERS \
"org.freedesktop.Telepathy.Client.Observer.DelayApprovers"

#define TP_IFACE_CLIENT_APPROVER \
"org.freedesktop.Telepathy.Client.Approver"

#define TP_IFACE_QUARK_CLIENT_APPROVER \
  (tp_iface_quark_client_approver ())

GQuark tp_iface_quark_client_approver (void);


#define TP_PROP_CLIENT_APPROVER_APPROVER_CHANNEL_FILTER \
"org.freedesktop.Telepathy.Client.Approver.ApproverChannelFilter"

#define TP_IFACE_CLIENT_HANDLER \
"org.freedesktop.Telepathy.Client.Handler"

#define TP_IFACE_QUARK_CLIENT_HANDLER \
  (tp_iface_quark_client_handler ())

GQuark tp_iface_quark_client_handler (void);


#define TP_PROP_CLIENT_HANDLER_HANDLER_CHANNEL_FILTER \
"org.freedesktop.Telepathy.Client.Handler.HandlerChannelFilter"

#define TP_PROP_CLIENT_HANDLER_BYPASS_APPROVAL \
"org.freedesktop.Telepathy.Client.Handler.BypassApproval"

#define TP_PROP_CLIENT_HANDLER_CAPABILITIES \
"org.freedesktop.Telepathy.Client.Handler.Capabilities"

#define TP_PROP_CLIENT_HANDLER_HANDLED_CHANNELS \
"org.freedesktop.Telepathy.Client.Handler.HandledChannels"

#define TP_IFACE_CLIENT_INTERFACE_REQUESTS \
"org.freedesktop.Telepathy.Client.Interface.Requests"

#define TP_IFACE_QUARK_CLIENT_INTERFACE_REQUESTS \
  (tp_iface_quark_client_interface_requests ())

GQuark tp_iface_quark_client_interface_requests (void);


#define TP_IFACE_DEBUG \
"org.freedesktop.Telepathy.Debug"

#define TP_IFACE_QUARK_DEBUG \
  (tp_iface_quark_debug ())

GQuark tp_iface_quark_debug (void);


#define TP_PROP_DEBUG_ENABLED \
"org.freedesktop.Telepathy.Debug.Enabled"

#define TP_IFACE_AUTHENTICATION_TLS_CERTIFICATE \
"org.freedesktop.Telepathy.Authentication.TLSCertificate"

#define TP_IFACE_QUARK_AUTHENTICATION_TLS_CERTIFICATE \
  (tp_iface_quark_authentication_tls_certificate ())

GQuark tp_iface_quark_authentication_tls_certificate (void);


#define TP_PROP_AUTHENTICATION_TLS_CERTIFICATE_STATE \
"org.freedesktop.Telepathy.Authentication.TLSCertificate.State"

#define TP_PROP_AUTHENTICATION_TLS_CERTIFICATE_REJECTIONS \
"org.freedesktop.Telepathy.Authentication.TLSCertificate.Rejections"

#define TP_PROP_AUTHENTICATION_TLS_CERTIFICATE_CERTIFICATE_TYPE \
"org.freedesktop.Telepathy.Authentication.TLSCertificate.CertificateType"

#define TP_PROP_AUTHENTICATION_TLS_CERTIFICATE_CERTIFICATE_CHAIN_DATA \
"org.freedesktop.Telepathy.Authentication.TLSCertificate.CertificateChainData"
