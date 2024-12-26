-- strings are immutable
a = "one thing"
b = string.gsub(a, "one", "another") -- change string parts

print(a)
print(#a) -- print length of string (number of bytes)

print(b)
print(#b)

print("Hello " .. "World") -- string concatination

--[[
> a = "Hello"
> a .. " Word" --> Hello world
> a            --> "Hello"
]]

-- the first newline is ignored if it is an empty empty for multi-line strings
page = [[
 <html>
 <head>
 <title>An HTML Page</title>
 </head>
 <body>
 <a href="http://www.lua.org">Lua</a>
 </body>
 </html>
 ]]

print(page)

-- two ways to call string functions
c = "Hello"
c = string.upper(c)
print(c)
c = c:lower()
print(c)
