Pod::Spec.new do |s|

  s.name         = "AppusFramework"
  s.version               = "0.0.1"
  s.summary               = "Example of creating own pod."
	s.description      = "This is custom pod just for test This is custom pod just for test This is custom pod just for testThis is custom pod just for test This is custom pod just for test This is custom pod just for test This is custom pod just for test This is custom pod just for test"
  s.homepage              = "https://github.com/alexey-kubas-appus/Appus-Framework"
  s.license               = { :type => 'MIT', :file => "LICENSE" }
  s.author                = { "Username" => "ilya.borshchov@gmail.com" }
  s.platform              = :ios, "8.0"
  s.source = {
    :http => "https://dl.dropboxusercontent.com/u/48670573/Appus.framework.zip"
  }
  s.framework             = "Foundation"
  s.vendored_frameworks   = "Appus.framework"
  s.requires_arc          = true
end


