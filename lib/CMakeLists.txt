qt_add_library(TraderJournalLib STATIC
	tradelistmodel.cpp
	database.cpp
) 

target_link_libraries(TraderJournalLib PUBLIC
	Qt6::Core
)

target_include_directories(TraderJournalLib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
