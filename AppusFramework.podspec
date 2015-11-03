Pod::Spec.new do |s|

  s.name         = "AppusFramework"
  s.version               = "0.0.1"
  s.summary               = "Example of creating own pod."
	s.description      = "This is custom pod just for test This is custom pod just for test This is custom pod just for testThis is custom pod just for test This is custom pod just for test This is custom pod just for test This is custom pod just for test This is custom pod just for test"
  s.homepage              = "https://github.com/alexey-kubas-appus/Appus-Framework"
  s.license               = { :type => 'MIT', :file => "LICENSE" }
  s.author                = { "Username" => "ilya.borshchov@gmail.com" }
  s.platform              = :ios, "7.0"
  s.source                = { :git => "https://github.com/alexey-kubas-appus/Appus-Framework.git", :tag => "0.0.1" }
  s.source_files  = 'Classes/*.{h,m}'
  s.framework             = "Foundation"
  s.requires_arc          = true

end
