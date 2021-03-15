# Salty

Salty is a protection only, BBv2 derived GTAV menu. I'm releasing this now because i don't have time to keep up with new attacks and GTAV has become so toxic it's not enjoyable to play anymore.  Thankfully GTA6 is just around the corner.  So here is my code.  Have fun!

## Native logging

Logger.cpp is a configurable logging system for GTAV natives.  It reads natives.hpp and produces natives_logging.hpp/cpp.   These natives are then hooked and logged at runtime.  It can be configured to log namespaces, remove spam/common massages and also ignore some debugging natives which cant be hooked as they crash.  Really useful to see what is happing in the scripts.  Process.cpp processes the log file which is useful to fine tune what natives are logged to remove unwanted noise.

All script, net and sync events and natives are logged in csv format.

## Protections (crashes)

- model crashes
- sync/ack events - invalid owner
- sync/ack events - invalid object id
- sync/ack events - invalid time random or backwards in time
- sync/ack events - to objects you dont own - or nor existant
- sync create - invalid object type
- sync create - flooding with the sync_flag == 4 - script objects
- sync create - multiple objects in the same location
- sync create - duplicate objects id or other players objects
- sync create - creating too many objects in your bubble_id
- sync events - wrong synctree type - sending boat sync trees to car
- sync remove - removing other players objects or player id's
- sync acks - wrong player, wrong ower or invalid object id 
- protocol errors - out of sequence messages / messages depending on player before player object is created
- protocol errors - creating peds/objects before player object
- sync_buffer_read overflow and underflow
- garbage in the datbitbuffer
- structured exception handling on all hooks
- crash signatures in datbitbuffer
- bad script events / flooding
- bad net events / flooding
- can forcibly stop all session transitions by blocking "MainTransition"

## Menus

Previously 100% protected from

- 2Take1
- Luna
- Impulse
- Disturbed
- Paragon
- PhantomX

## Hooks

- functions::buffer_int_t m_buffer_int{};
- functions::clone_pack_t m_clone_pack{};
- functions::clone_create_t m_clone_create{};
- functions::clone_sync_t m_clone_sync{};
- functions::clone_remove_t m_clone_remove{};
- functions::sync_read_t m_sync_read{};
- functions::sync_can_apply_t m_sync_can_apply{};
- functions::unregister_object_t m_unregister_object{};
- functions::clone_create_ack_t m_clone_create_ack{};
- functions::clone_sync_ack_t m_clone_sync_ack{};
- functions::clone_remove_ack_t m_clone_remove_ack{};
- functions::network_event_t m_network_event{};
- functions::script_event_t m_script_event{};
- functions::handle_event_t m_handle_event{};
- functions::game_event_t m_game_event{};
- functions::node_read_t m_node_read{};
- functions::get_owner_t m_get_owner{};
- functions::get_network_object_for_player_t m_get_network_object_for_player{};
- functions::get_network_object_t m_get_network_object{};  
- rage::CReplayInterface* m_replay{};

## Thanks

- MIKE#6623/imabignumber (discord)
- Entrodor Wolfry#3502 (discord)
- Pocakking (UC)
- polivilas (UC)
- Chrizzi (UC)
- pelecanidae (UC)

## Skid

 - https://github.com/Pocakking/BigBaseV2
 - https://github.com/1337Nexo/BigBaseV2
 - https://bitbucket.org/gir489/bigbasev2-fix/src/master/
  
## Contact

- tecel007#9031 (discord)
