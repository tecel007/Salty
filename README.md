# Salty

Salty is a protection only, BBv2 derived GTAV menu. I'm releasing this now because i don't have time to keep up with new attacks.  So here is my code.  Have fun!

## Native logging

"Logger" is a configurable logging system for GTAV natives.  It reads natives.hpp and produces natives_logging.hpp/cpp.   These natives are then hooked and logged at runtime.  It can be configured to log namespaces, remove spam/common messages and also ignore some debugging natives which cant be hooked as they crash.  Really useful to see what is happing in the scripts.  "Process" processes the log file which is useful to fine tune what natives are logged too often to remove unwanted noise.

All script, net and sync events and natives are logged in csv format.

## Protections (crashes)

- model crashes
- sync/ack events - invalid owner
- sync/ack events - invalid object id - objects you dont own - or non existant
- sync/ack events - invalid time random or backwards in time
- sync events - wrong synctree type - sending boat sync trees to car
- sync create - invalid object type
- sync create - flooding with the sync_flag == 4 - script objects
- sync create - multiple objects in the same location
- sync create - duplicate objects id or other players objects
- sync create - creating too many objects in your bubble_id
- sync create - attach or proximity
- sync remove/ack events - removing other players objects or player id's
- sync acks - wrong player, wrong ower or invalid object id 
- protocol errors - out of sequence messages depending on player before player object is created
- protocol errors - creating peds/objects before player object
- sync_buffer_read overflow and underflow
- garbage in the datbitbuffer
- structured exception handling on all hooks
- crash signatures in datbitbuffer
- bad script events / flooding
- bad net events / flooding
- can forcibly stop all session transitions by blocking "MainTransition"
- DoS attacks

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

## Patterns

- This code is for the steam version of GTAV only

## Todo

- There are loads of other things i've played with that aren't in the code anymore.  Parsing netsynctrees, scraping read32 for hashes, scraping memory objects for hashes, trying to reverse the network protocol directly.  There endless possibilities, but they all take time...

## Thanks

- Entrodor Wolfry#3502 (discord)
- Pocakking (UC)
- polivilas (UC)
- Chrizzi (UC)
- pelecanidae (UC)

## Skid

 - https://github.com/Pocakking/BigBaseV2
 - https://bitbucket.org/gir489/bigbasev2-fix/src/master/
  
## Contact

- tecel007#9031 (discord)
