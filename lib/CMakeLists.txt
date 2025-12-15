add_library(TraderJournalLib STATIC
	trade.h
	tradelistmodel.cpp
	tradelistmodel.h
	database.cpp
	database.h
) 

target_include_directories(TraderJournalLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(TraderJournalLib PRIVATE Qt6::Core Qt6::Sql Qt6::Widgets)