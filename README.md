# Arduino
#
# Delete Orphaned Device
#
# http://<vera_ip>:3480/data_request?id=device&action=delete&device=000
#
#
# Codes to list devices:
#
# http://www.vesternet.com/resources/application-notes/apnt-43#.WJC_xPnytEY
#
# local file = io.open("/www/devlist.txt", "w")
# file:write("[DeviceNo / id] device names on " .. os.date() .. "\n")
# for deviceNo,d in pairs(luup.devices) do
#   if d.id ~= "" then
#   file:write(string.format('[%03d / %s] %s \n', deviceNo, d.id, d.description))
# end
# end
# file:close()

